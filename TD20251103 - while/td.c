#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	const unsigned int BASE = 10;
	unsigned int n = atoi(argv[1]); 
	unsigned int w = n == 0 ? 1 : 0;
	// printf("\ninput a positive value\n");
	// scanf("%u", &n);
	//w = log(n) + 1;
	while (n > 0){
		n /= BASE;
		w++;
	}

	printf("\nn has %u digits\n", w);	
	return 0;
}