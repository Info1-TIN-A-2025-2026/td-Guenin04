#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
// define the gravitational constant
#define GRAVITATIONAL_CONSTANT 6.67e-11

	// Declare and initialize variables
	unsigned int order_of_magnitude_mass1 = 0;	  // order of magnitude of the mass of the first body
	unsigned int order_of_magnitude_mass2 = 0;	  // order of magnitude of the mass of the second body
	unsigned int order_of_magnitude_distance = 0; // order of magnitude
	double mass1 = 0;							  // mass of the first body
	double mass2 = 0;							  // mass of the second body
	double distance = 0;						  // distance between the two bodies

	// Ask the used for input, and read written values
	printf("input the order of magnitude of the masse 1\n 1) kilogram\n 2) tons\n 3) yottagram\n 4) ronnagram\n 5) quettagram\n");
	scanf("%u", &order_of_magnitude_mass1);
	printf("Input the mass of the first body : ");
	scanf("%lf", &mass1);
	printf("Input the order of magnitude of the masse 2\n 1) kilogram\n 2) tons\n 3) yottagram\n 4) ronnagram\n 5) quettagram\n");
	scanf("%u", &order_of_magnitude_mass2);
	printf("Input the mass of the second body : ");
	scanf("%lf", &mass2);
	printf("Input the order of magnitude of the distance\n 1) metre\n 2) kilometre\n 3) gigametre\n");
	scanf("%u", &order_of_magnitude_distance);
	printf("Input the distance between the two bodies : ");
	scanf("%lf", &distance);

	// convert mass 1 to kg
	switch (order_of_magnitude_mass1)
	{
	case 1:
		// do nothing
		break;
	case 2:
		// mulitply by 1000 to convert tons to kg
		mass1 *= 1e3;
		break;
	case 3:
		// multiply by 1e21 to convert yottagram to kg
		mass1 *= 1e21;
		break;
	case 4:
		// multiply by 1e24 to convert ronnagram to kg
		mass1 *= 1e24;
	case 5:
		// multiply by 1e27 to convert quettagram to kg
		mass1 *= 1e27;
		break;
	default:
		break;
	}
	// convert mass 2 to kg
	switch (order_of_magnitude_mass2)
	{
	case 1:
		// do nothing
		break;
	case 2:
		// mulitply by 1000 to convert tons to kg
		mass2 *= 1e3;
		break;
	case 3:
		// multiply by 1e21 to convert yottagram to kg
		mass2 *= 1e21;
		break;
	case 4:
		// multiply by 1e24 to convert ronnagram to kg
		mass2 *= 1e24;
	case 5:
		// multiply by 1e27 to convert quettagram to kg
		mass2 *= 1e27;
		break;
	default:
		break;
	}
	// convert distance to km
	switch (order_of_magnitude_distance)
	{
	case 1:
		// do nothing
		break;
	case 2:
		// multiply by 1000 to convert km to m
		distance *= 1e3;
		break;
	case 3:
		// multiply by 1e9 to convert Gm to m
		distance *= 1e9;
		break;
	default:
		break;
	}
	// calculate the gravitational force between the two bodies
	double force = (GRAVITATIONAL_CONSTANT * mass1 * mass2) / (distance * distance);

	// print the result
	printf("The gravitational force between the two bodies is: %e N\n", force);
}