#include <stdio.h>		//	printf
#include <limits.h>		//	CHAR_BIT
#include <stdlib.h>		//	wchar_t, bool

int main()
{
	puts("Type:\t\t\t\tBytes:\t\tBits:");
	
	printf(" %-32s%2zu B%15lu b\n", "char",					sizeof(char),					CHAR_BIT * sizeof(char)					);
//	printf(" %-32s%2zu B%15lu b\n", "char16_t",				sizeof(char16_t),				CHAR_BIT * sizeof(char16_t)				);
//	printf(" %-32s%2zu B%15lu b\n", "char32_t",				sizeof(char32_t),				CHAR_BIT * sizeof(char32_t)				);
	printf(" %-32s%2zu B%15lu b\n", "wchar_t",				sizeof(wchar_t),				CHAR_BIT * sizeof(wchar_t)				);
	
	puts("------------------------------------------------------");
	
	printf(" %-32s%2zu B%15lu b\n", "signed char",			sizeof(signed char),			CHAR_BIT * sizeof(signed char)			);
	printf(" %-32s%2zu B%15lu b\n", "short",				sizeof(short),					CHAR_BIT * sizeof(short)				);
	printf(" %-32s%2zu B%15lu b\n", "int",					sizeof(int),					CHAR_BIT * sizeof(int)					);
	printf(" %-32s%2zu B%15lu b\n", "long",					sizeof(long),					CHAR_BIT * sizeof(long)					);
	printf(" %-32s%2zu B%15lu b\n", "long long",			sizeof(long long),				CHAR_BIT * sizeof(long long)			);
	
	puts("------------------------------------------------------");
	
	printf(" %-32s%2zu B%15lu b\n", "unsigned char",		sizeof(unsigned char),			CHAR_BIT * sizeof(unsigned char)		);
	printf(" %-32s%2zu B%15lu b\n", "unsigned short",		sizeof(unsigned short),			CHAR_BIT * sizeof(unsigned short)		);
	printf(" %-32s%2zu B%15lu b\n", "unsigned",				sizeof(unsigned),				CHAR_BIT * sizeof(unsigned)				);
	printf(" %-32s%2zu B%15lu b\n", "unsigned long",		sizeof(unsigned long),			CHAR_BIT * sizeof(unsigned long)		);
	printf(" %-32s%2zu B%15lu b\n", "unsigned long long",	sizeof(unsigned long long),		CHAR_BIT * sizeof(unsigned long long)	);
	
	puts("------------------------------------------------------");
	
	printf(" %-32s%2zu B%15lu b\n", "float",				sizeof(float),					CHAR_BIT * sizeof(float)				);
	printf(" %-32s%2zu B%15lu b\n", "double",				sizeof(double),					CHAR_BIT * sizeof(double)				);
	printf(" %-32s%2zu B%15lu b\n", "long double",			sizeof(long double),			CHAR_BIT * sizeof(long double)			);
	
//	puts("------------------------------------------------------");
	
//	printf(" %-32s%2zu B%15lu b\n", "bool",					sizeof(bool),					CHAR_BIT * sizeof(bool)					);
//	printf(" %-32s%2zu B%15lu b\n", "void",					sizeof(void),					CHAR_BIT * sizeof(void)					);
	
	return 0;
}
