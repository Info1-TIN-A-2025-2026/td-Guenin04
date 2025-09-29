#include <stdio.h>

int main(int argc, const char *argv[])
{
	// Declare and initalize variables
	signed int s = 0;
	unsigned int seconds = 0;
	unsigned int minutes = 0;
	unsigned int hours = 0;

	// Ask the user for an input and save it to s
	printf("Number of Seconds: ");
	scanf("%d", &s);

	// Check for negative input and overflow(value >= 86400)
	if (s < 0)
	{
		puts("Error");
	}
	else if (s >= 86400)
	{
		puts("Overflow");
	}
	// if value is within range
	else
	{
		// Convert the s value to hours, minutes, and seconds
		seconds = s % 60;
		minutes = (s / 60) % 60;
		hours = s / 3600;
		/*
		hours = s / 3600;
		minutes = (s / 60) - (hours * 60);
		seconds = s - (minutes * 60) - (hours * 3600);
		*/
		// Print the values, with the wanted format
		printf("%02u:%02u:%02u\n", hours, minutes, seconds);
		return 0;
	}
}