#include <stdio.h>

//Function prototype
void proc(void);
void f1(const int a);
int main(int argc, const char *argv[])
{

	// int i;
	// // Function call
	// proc();

	// printf("Input integer value:\n");
	// scanf("%d", &i);
	// f1(i);

	return 0;
}
//Function definition/implementation
void proc(void){
	puts("🎶Bonjour!");
	//facultative
	return;
}
//Function implementation
void f1(const int a){
	//Display the value of a multiplied by 3
	printf("%d\n", a*3);
	//facultative
	return;
}
