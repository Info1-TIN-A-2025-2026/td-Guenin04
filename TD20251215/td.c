#include <stdio.h>
#include <stdlib.h>

#define NUM_CELLS 1000
#define MIN_VALUE (-100)
#define MAX_VALUE (100)

int main(int argc, const char *argv[])
{
	srand(0); // Seed the random number generator

	// Used to define size of the array
	long array[NUM_CELLS] = {0};

	// Fill array with random shit from min value to max value
	for (long i = 0; i < NUM_CELLS; i++)
	{
		// array[i] = (rand() * (MAX_VALUE-MIN_VALUE)/RAND_MAX + MIN_VALUE ); //fill with number -100 ... +100
		array[i] = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
	}
	// Ask used for input
	printf("Input Wanted value, from %d to %d\n", MIN_VALUE, MAX_VALUE);
	long wanted;
	scanf("%ld", &wanted);

	if (wanted < MIN_VALUE || wanted > MAX_VALUE)
	{
		printf("Error, Input a integrer that is withing the specified range\n");
		return 0;
	}
	// Search the wanted value in the array
	for (long j = 0; j < NUM_CELLS; j++)
	{
		if (array[j] == wanted)
		{
			printf("Found at index: %ld\n", j);
			return 0;
		}
	}
	printf("Not Found\n");
	return 0;
}