#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	double a = 0;
	double e_pi = 0;
	double pi = 3.14159265358979323846;
	double precision = 0.000000001;
	unsigned long i = 0;
	

	//Approximate PI, tell number of step to get to a certain precision 
	while ((fabs(e_pi - pi) > precision))
	{
		a += (pow(-1, i)) / (2 * i + 1);
		e_pi = 4 * a;
		i++;
	}
	//((e_pi - pi) > precision) || ((e_pi - pi) < precision)
	printf("%ld\n", i);
	printf("%.15lf\n", 4 * a);
	return 0;
}
