#include <stdio.h>
//Function prototype
void discriminant(const double a, const double b, const double c);
double discriminant2(const double a, const double b, const double c);
int main(int argc, const char *argv[])
{
	double a, b, c;
	printf("Input values a, b and c:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%.2lf\n", discriminant2(a, b, c));

	return 0;
}
//Function implementation
void discriminant(const double a2, const double b2, const double c2){
	printf("Discriminant: %.2lf\n", b2*b2 - 4*a2*c2);
	return;
}
//Function implementation
double discriminant2(const double a, const double b, const double c){
	return b*b - 4*a*c;
}