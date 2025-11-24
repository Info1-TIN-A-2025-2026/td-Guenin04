#include <stdio.h>
#include <math.h>

int f(unsigned int t, int *a, int *b, int *c);
double c2p(double x, double y, double *phi);

int main(int argc, const char *argv[])
{
	int h,m,s;
	double x,y,r,angle;
	// printf("adress of h = %p\n", &h);
	// printf("adress of m = %p\n", &m);
	// printf("adress of s = %p\n", &s);
	f(86399, &h,&m,&s);
	printf("%02d : %02d : %02d\n",h,m,s);

	printf("Enter coordinates (x y): ");
	scanf("%lf %lf", &x, &y);
	r = c2p(x, y, &angle);
	printf("r = %.2f, angle = %.2f radians\n", r, angle);

	return 0;
}

int f(unsigned int t, int *a, int *b, int *c){
	//printf("a = %p \nb = %p \nc = %p\n", a,b,c);
	*a = t/3600;
	*b = (t % 3600) / 60;
	*c = t % 60;
	return t;
}
double c2p(double x, double y, double *phi ){
	*phi = atan2 (y, x);
	return sqrt (x*x + y*y);
}