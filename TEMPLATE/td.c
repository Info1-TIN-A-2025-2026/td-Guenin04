#include <stdio.h>

int main(int argc, const char *argv[])
{
	int t[3] = {1,2,3};
	int *p = t;
	printf("%d",++*p);
	printf("%d",*p);
	return 0;
}