#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	long volume = 42; // m3
	printf("Volume = [%ld] m³\n", volume);
	printf("Volume = [%7ld] m³\n", volume);	 // right justified
	printf("Volume = [%-7ld] m³\n", volume); // left justified

	printf("Volume = [%+ld] m³\n", volume);	 // add sign of variable
	printf("Volume = [%+7ld] m³\n", volume); // right justified with sign
	printf("Volume = [%+-7ld] m³\n", volume);

	long pression = -4; // Bar
	printf("Pression = [%ld] Bar\n", pression);

	double pi = 3.141592653589793;
	printf("π = [%lf]\n", pi);	  // 6 digit after decimal point
	printf("π = [%.2lf]\n", pi);  // 2 digit after decimal
	printf("π = [%+.2lf]\n", pi); // 2 digit after decimal with sign

	double absolut_zero = -459.67;						  // °F
	printf("Absolute zero = [%.1lf] °F\n", absolut_zero); // 1 digit after decimal

	// printf("\nπ = [%+.2lf]\nAbsolute zero = [%.2lf]\n", pi, absolut_zero);

	printf("[%+10.2lf]\n", pi);			  // total width 10, 2 digit after decimal
	printf("[%+10.2lf]\n", absolut_zero); // total width 10, 2 digit after decimal

	double light_speed = 299792458.0;				   // m/s
	printf("Light speed = [%+10.2lf]\n", light_speed); // shift if too big

	int num_digits = 3;
	printf("π = [%.*lf]\n", num_digits, pi); // 2 digit after decimal

	num_digits = 12;
	printf("π = [%.*lf]\n", num_digits, pi); // 12 digit

	int full_width = 8;
	num_digits = 3;
	printf("π = [%+*.*lf]\n", full_width, num_digits, pi); // width 8, 3 digit

	return 0;
}