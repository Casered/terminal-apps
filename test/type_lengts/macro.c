/**
*	A simple C program checking the actual size of data types
*	assigned by the compiler for the given system and hardware.
*
*	@author	Casered
*/

#include <stdio.h>		//	printf
#include <limits.h>		//	CHAR_BIT
#include <stdlib.h>		//	wchar_t
#include <stdbool.h>	//	bool

//	creating a macro to avoid copy-pasting stuff all over the place
#define PRINT_SIZE(TYPE) \
printf(" %-24s%5zu B%13lu b\n", #TYPE, sizeof(TYPE), CHAR_BIT*sizeof(TYPE))

int main()
{
	puts("Type:                      Bytes:          Bits:");
	
//	puts("Type:\t\t\t   Bytes:\t   Bits:");
//	puts("^.......^.......^.......^.......^.......^.......");
	
	PRINT_SIZE(char);
//	PRINT_SIZE(char16_t);
//	PRINT_SIZE(char32_t);
	PRINT_SIZE(wchar_t);
	
	puts("------------------------------------------------");
	
	PRINT_SIZE(signed char);
	PRINT_SIZE(short);
	PRINT_SIZE(int);
	PRINT_SIZE(long);
	PRINT_SIZE(long long);
	
	puts("------------------------------------------------");
	
	PRINT_SIZE(unsigned char);
	PRINT_SIZE(unsigned short);
	PRINT_SIZE(unsigned int);
	PRINT_SIZE(unsigned long);
	PRINT_SIZE(unsigned long long);
	
	puts("------------------------------------------------");
	
	PRINT_SIZE(float);
	PRINT_SIZE(double);
	PRINT_SIZE(long double);
	
	puts("------------------------------------------------");
	
	PRINT_SIZE(bool);
//	PRINT_SIZE(void);
	
	return 0;
}

