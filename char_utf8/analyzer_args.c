/**
*	A command-line C program breaking up every given argument
*	into single chars and displaying their values one by one,
*	as decimal, binary (big-endian) and hexadecimal numbers.
*
*	@author	Casered
*/

#include <stdio.h>		//	printf
#include <limits.h>		//	CHAR_BIT

int main(int argc, char* argv[])
{
	if( argc<2 )	{ puts("No arguments have been passed!"); return 1; }
	
	puts("Char:       Dec:     Bit-by-bit:    Hex:");
	for(char* c = argv[1], null_counter = 1; null_counter < argc; c++)
	{
		//	for tags and markers, e.g. null sign
		if( *c<' ' )	printf(" \\%-4d%9d       ", *c, *c);
		else			printf( "  %-4c%9d       ", *c, *c);
		
		for(unsigned short bit_mask = 1 << (CHAR_BIT-1); bit_mask > 0; bit_mask >>= 1)
		{
			if( bit_mask & *c )	putchar('x');
			else				putchar('.');
		}
		
		printf("       %02X\n", *c);
		
		if(*c == '\0')	null_counter++;
/*		{
			null_counter++;
			puts("^---*---^---*---^---*---^---*---^---*---");
			puts("----------------------------------------");
		}
*/	}
	
	return 0;
}
