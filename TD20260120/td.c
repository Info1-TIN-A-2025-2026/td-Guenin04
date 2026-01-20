#include <stdio.h>
#include <stdint.h>

#define N 5

void init(short t[], const size_t n, const short v);

int main(int argc, const char *argv[])
{
	short t[N];
	init(t, N, 17);
	// problème avec ça, ça rempli chaque octet, pas par rapport à une taille définie
	// dans notre cas chaque case fait 2 octet, car type short
	memset(t, 17, N);
	// pour que ça marche
	memset(t, 0, N * sizeof(t[0]));
}
// used to fill an array with a v value
// where size_t is the biggest value size possible
void init(short t[], const size_t n, const short v)
{
	for (size_t i = 0; i < n; i++)
	{
		*(t + i) = v; // notation pointeur
		// is equal
		// t[i] = v;	//notation tableau
	}
}
