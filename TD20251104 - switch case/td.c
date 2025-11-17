#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	unsigned int state = 0;
	printf("Enter tne state (ON = 1, OFF = 2, BLINK = 4) : ");
	scanf("%u", &state);
	switch (state){
	case 1:
		puts("ON");
		break;
	case 2:
	    puts("OFF");
		break;
	case 4:
		puts("BLINK");
		break;
	default:
		puts("ERROR");
		break;
	}

	return 0;
}