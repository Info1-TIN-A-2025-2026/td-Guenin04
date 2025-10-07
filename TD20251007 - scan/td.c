#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	float x = 0.f;
	float y = 0.f;

	int ret = 0;

	// printf("Enter a floating point value x: ");
	// ret = scanf("%f", &x); //&x = address of x
	// printf("x = %.4f\n", x);
	// printf("ret = %d\n", ret);

	// printf("Enter a floating point value y: ");
	// ret = scanf("%f", &y); //&x = address of y
	// printf("x = %.4f\n", y);
	// printf("ret = %d\n", ret);

	// printf("Enter two floating point values (space separated): ");
	// ret = scanf("%f %f", &x, &y); //&x = address of x
	// printf("ret = %d\n", ret);
	// printf("x = %.4f\n", x);
	// printf("y = %.4f\n", y);

	printf("Enter two floating point values (: separated): ");
	ret = scanf("%f:%f", &x, &y); //&x = address of x
	printf("ret = %d\n", ret);
	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	char a = 0;
	scanf(" %ld", &a); // space before %c to ignore whitespace characters

	return 0;
}