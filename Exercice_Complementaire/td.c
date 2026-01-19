#include <stdio.h>
#include <math.h>

#define MASS_FULL 750	 // in tons
#define MASS_EMPTY 90	 // in tons
#define CONSUMPTION 4	 // 4T/s
#define EJECTION_SPEED 4 // 4Km/s

int main(int argc, const char *argv[])
{
	unsigned long time = 0;
	double mass = MASS_FULL;
	double speed_ms = 0;
	double speed_kmh = 0;
	double consumed_fuel = 0;
	double altitude = 0;
	// delta V = Ve * ln(M0/M1)
	printf("Time	MASS		m/s		km/h		Fuel Consumed	ΔT\n");
	while (mass > MASS_EMPTY){
		consumed_fuel = time * CONSUMPTION;
		mass = MASS_FULL - consumed_fuel;
		speed_ms = EJECTION_SPEED * log(MASS_FULL / mass) * 1000;
		speed_kmh = speed_ms * 3.6;
		altitude += speed_ms / 1000;
		if (time % 10 == 0){
			printf("%-7lu %-15.2lf %-15.2lf %-15.2lf %-15.2lf %-15.2lf\n", time, mass, speed_ms, speed_kmh, consumed_fuel, altitude);
		}
		time++;
	}
	printf("%-7lu %-15.2lf %-15.2lf %-15.2lf %-15.2lf %-15.2lf\n", time - 1, mass, speed_ms, speed_kmh, consumed_fuel, altitude);
	return 0;
}