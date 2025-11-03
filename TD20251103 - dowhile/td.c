#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char *argv[])
{
	unsigned int n = atoi(argv[1]); // >0
	unsigned int r = 0; //
	//print digit in reverse order 
	// do{
	// 	r = n % 10;
	// 	printf("%u", r);
	// 	n /= 10;
	// } while (n > 0);
	do{
		r *= 10;
		r += n % 10;
		n /= 10;
	} while (n > 0);
	printf("\n%u\n", r);

	return 0;
}
