#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x=0, y=0;
	char str[256];
	char c='_';
	
	//	stdio.h
	printf("scanf():\t");		scanf("%d", &x);	printf("\tok\n");
	fflush(stdin);
	printf("getchar():\t");		c=getchar();		printf("\tok\n");
	printf("getc():\t");		c=getc(stdin);		printf("\tok\n");
	
	setbuf(stdin, NULL);
	
	printf("gets():\t");		gets(str);			printf("\tok\n");
	printf("scanf(x):\t");		scanf("%d", &x);	printf("\tok\n");
	printf("scanf(y):\t");		scanf("%d", &y);	printf("\tok\n");

//	printf("fscanf():\t");		fscanf("%d", &x);	printf("\tok\n");
//	printf("fgets():\t");		fgets();			printf("\tok\n");
//	printf("fgetc():\t");		fgetc();			printf("\tok\n");
//	printf("getc():\t");		 getc();			printf("\tok\n");
	
//	printf("%s", system("read"));
//	printf("%s", system("ls"));
	printf("%s\n", str);
	printf("\t%d\t%d\n", x, y);
	return 0;
}

