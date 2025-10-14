#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	// Declare and Initialize constants
	const double annual_interest_rate = 0.015;
	const double annual_volatility = 0.274;
	// Declare and Initialize variables
	double nb_days = 0;		 // in days
	double nb_years = 0;	 // in years
	double stock_price = 0;	 // original stock price
	double strike_price = 0; // strike price
	double call_price = 0;	 //
	double d1 = 0;
	double d2 = 0;
	double Nd1 = 0;
	double Nd2 = 0;
	double a1 = 0.319381530;
	double a2 = -0.356563782;
	double a3 = 1.781477937;
	double a4 = -1.821255978;
	double a5 = 1.330274429;
	double kd1 = 0;
	double kd2 = 0;

	// Ask the user for input values
	printf("Input the current stock price: ");
	scanf("%lf", &stock_price);
	printf("Input the contract length (in days): ");
	scanf("%lf", &nb_days);
	nb_years = nb_days / 365; // Convert the contract duration in years
	printf("Input the strike value: ");
	scanf("%lf", &strike_price);

	// Calculate d1 and d2
	d1 = (1 / (annual_volatility * sqrt(nb_years))) * (log(stock_price / strike_price) + (annual_interest_rate + (0.5 * pow(annual_volatility, 2))) * nb_years);
	d2 = (d1 - (annual_volatility * sqrt(nb_years)));

	kd1 = 1 / (1 + 0.2316419 * d1);
	kd2 = 1 / (1 + 0.2316419 * d2);

	Nd1 = 1 - (exp(-pow(d1, 2) / 2) / (sqrt(2 * M_PI))) * ((a1 * kd1) + (a2 * pow(kd1, 2)) + (a3 * pow(kd1, 3)) + (a4 * pow(kd1, 4)) + (a5 * pow(kd1, 5)));
	Nd2 = 1 - (exp(-pow(d2, 2) / 2) / (sqrt(2 * M_PI))) * ((a1 * kd2) + (a2 * pow(kd2, 2)) + (a3 * pow(kd2, 3)) + (a4 * pow(kd2, 4)) + (a5 * pow(kd2, 5)));

	call_price = stock_price * Nd1 - strike_price * exp(-annual_interest_rate * nb_years) * Nd2;

	printf("\nHere's the call price %lf\n", call_price);

	return 0;
}