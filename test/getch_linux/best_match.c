#include <stdio.h>

int main()
{
	const int str_lim = 256;
	char str[str_lim];
	char c='_';

	printf("fgets():\t");	fgets(str, str_lim, stdin);	printf("\n");

	printf("Press any button to continue.");
	setbuf(stdin, NULL);	c=fgetc(stdin);	printf("\tok\n");
	
	printf("%s\n", str);
	return 0;
}

