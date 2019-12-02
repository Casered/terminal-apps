#include <stdio.h>

int main(int argc, char* argv[])
{	
	printf("Wartosci:\n argc:\t%d\n argv:\t", argc);
	for(int i=0; i<argc; i++)
		printf("%X ", (int) argv[i] );
	printf("\n\t");
	for(int i=1; i<argc; i++)
		printf("\t+%d", ((int) argv[i])-((int) argv[i-1]) );
	printf("\n\n");
	
	for(int i=0; i<argc; ++i)
		printf("[%d]\t%s\n", i, argv[i]);
	return 0;
}
