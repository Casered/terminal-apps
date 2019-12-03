//	listing all prime factors of a given number

#include <stdio.h>		//	printf, scanf
#include <stdlib.h>		//	realloc, free
#include <stdbool.h>	//	bool, true, false
#include <math.h>		//	sqrt

bool is_prime(unsigned long long number, unsigned long long* array);
void generate_primes(unsigned long long limit, unsigned long long* array);

int main(int argc, char* argv[])
{
	if(argc <= 1) return 0;		// do nothing if having received no input
	
	unsigned long long lim = atoi( argv[1] );
	
	unsigned long long* array = (unsigned long long*) calloc(1024, sizeof(unsigned long long));
	if(array == NULL)
	{
		puts("Memory allocation problem!\n");
		return 1;
	}
	
	free(array);
	
	return 0;
}

bool is_prime(unsigned long long number, unsigned long long* array)
{
	for	(	unsigned long long* ptr = array;
			( (*ptr) != 0) && ( (*ptr) <= (unsigned long long) sqrt(number));
			++ptr
		)
	
		if(number%(*ptr) == 0) return false;
	return true;
}

void generate_primes(unsigned long long limit, unsigned long long* array)
{
	unsigned long long primes_found = 0, size = 1024;
	
	for(unsigned long long n=2; n <= limit; ++n)
	{
		if(primes_found >= size)
		{
			size *= 2;

			array = (unsigned long long*) realloc(array, size*sizeof(unsigned long long));
			if(array == NULL)
			{
				puts("Memory allocation problem!\n");
				exit(0);
			}
			
			//	filling new space with 0's
			for(unsigned long long i = size/2; i < size; i++)
				*(array+i) = 0ull;
		}
		
		if( is_prime(n, array) )
		{
			*(array+primes_found) = n;
			primes_found++;
		}
	}
}

//	Piotr Chlebowski
//	INA Stac. Inz. Sem.1

