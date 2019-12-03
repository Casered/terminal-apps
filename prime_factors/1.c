//	listing all prime factors of a given number

#include <stdio.h>		//	printf, scanf
#include <stdlib.h>		//	realloc, free
#include <stdbool.h>	//	bool, true, false
#include <math.h>		//	sqrt

bool is_prime(unsigned long long number, unsigned long long* array);
unsigned long long* generate_primes(unsigned long long limit);
void divide(unsigned long long n, unsigned long long* array);

int main(int argc, char* argv[])
{
	if(argc <= 1) return 0;		// do nothing if having received no input
	unsigned long long lim = atoi( argv[1] );
	
	unsigned long long* array = generate_primes(lim);
	
	puts("Generation successful!\n");
	
	divide(lim, array);
	
	puts("Division successful!\n");
	
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

unsigned long long* generate_primes(unsigned long long limit)
{
	unsigned long long primes_found = 0, size = 1024;
	
	unsigned long long* array = (unsigned long long*) calloc(size, sizeof(unsigned long long));
	if(array == NULL)
	{
		puts("Memory allocation problem!\n");
		exit(0);
	}
	
	for(unsigned long long n=2; n <= limit; ++n)
	{
		if(primes_found >= size)	//	size+1)
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
	
	printf("Biggest prime:\t%llu\n", *(array+primes_found-1) );
	
	return array;
}

void divide(unsigned long long n, unsigned long long* array)
{
	int width = printf(" %llu |", n) -3;
	
	while(n > 1)
	{
		while(n % *array == 0)
		{
			n /= *array;
			printf(" %llu\n %*llu |", *array, width, n);
		}
		
		array++;
	}
	
	puts("\n");
}

//	Piotr Chlebowski
//	INA Stac. Inz. Sem.1

