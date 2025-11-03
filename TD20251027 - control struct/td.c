//Demonstration of control structures
#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	//Declaration and initialization of variables
	const unsigned int I_MIN = 2;
	const unsigned int I_MAX = 10000;
	unsigned int i;
	unsigned int j;
	//is prime
	while(i ){

	}
	for (i = I_MIN; i < I_MAX; i++)
	{
		bool is_prime = true;
		for (j = I_MIN; j <= i-1; j++)
		{
			if((i%j)==0){
				is_prime = false;
				break;
			}
		}
		if(is_prime){
			printf("%u is prime\n", i);
		}
	}
	return 0; 
}