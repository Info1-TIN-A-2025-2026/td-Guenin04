#include <stdio.h>
#include <stdlib.h>

void printTree(int height);

int main(int argc, const char *argv[])
{
	if (argc < 2)
	{
		printf("You must insert a value\n");
		return 0;
	}
	int height = atoi(argv[1]);
	// if(height % 2 != 0){
	// 	printf("You must chose an odd value !\n");
	// 	return 0;
	// }
	printTree(height);
	return 0;
}

void printTree(int height)
{
	// espace = hauteur - 1
	// étoile = n * 2 - 1
	int blank, star;
	blank = height - 1;
	star = height / 2 - 1;
	// Draw christmas tree
	for (int i = 0; i < height; i++)
	{
		// print spaces
		for (int j = 0; j < blank; j++)
		{
			printf(" ");
		}
		// print stars
		for (int k = 0; k < (i * 2 + 1); k++)
		{
			if(k == 0 || k == (i * 2)){
				printf("*");
				continue;

			}
			printf("°");
		}
		printf("\n");
		blank--;
	}
	printf("%*c|\n", height - 1, ' ');
	printf("%*c|\n", height - 1, ' ');
	printf("%*c———\n", height - 2, ' ');

}