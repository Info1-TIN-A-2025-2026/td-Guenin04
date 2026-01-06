#include <stdio.h>
#include <string.h>

void display(char *t);

int main(int argc, const char *argv[])
{
	char s1[] = "Super Nickel";
	printf("memory size : %ld\n", sizeof(s1));
	printf("num cells   : %ld\n", sizeof(s1) / sizeof(char));

	// Check for number of character in string
	unsigned long count = 0;
	while (s1[count] != 0)
	{
		count++;
	}
	// print result manually
	printf("num char    : %lu\n\n", count);
	// print result using strlen function
	printf("num char with strlen : %lu\n\n", strlen(s1));

	char s2[100] = "Super Nickel";
	printf("memory size : %ld\n", sizeof(s2));
	printf("num char    : %lu\n\n", strlen(s2));

	// s3 contient l'adresse d'un char
	char *s3 = "pipo a beaucoup fait pour l'informatique en italie";
	printf("memory size : %ld\n", sizeof(s3));
	printf("num char    : %lu\n\n", strlen(s3));

	char s4[] = "Lorem ipsum dolor sit amet, consectetuer adipiscing elit."
				" Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus."
				" Donec quam felis, ultricies nec, pellentesque eu, pretium quis, sem. Nulla consequat massa quis enim."
				" Donec pede justo, fringilla vel, aliquet nec, vulputate eget, arcu. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo."
				" Nullam dictum felis eu pede mollis pretium. Integer tincidunt. Cras dapibus. Vivamus elementum semper nisi."
				" Aenean vulputate eleifend tellus. Aenean leo ligula, porttitor eu, consequat vitae, eleifend ac, enim. "
				"Aliquam lorem ante, dapibus in, viverra quis, feugiat a, ";
	char s5[] = "ABC";
	display(s5);
	// Tableau de 3 * 10 char = 30 bytes in memory
	char s6[][10] = {
		"ABC",	 // 3+1 (\0)
		"DEF",	 // 3+1 (\0)
		"GHIJKL" // 6+1 (\0)
	};
	// 3 * sizeof(adress) = 24 bytes in memory
	char *s7[] = {
		"ABC",
		"DEF",
		"GHI"};
	puts("");
	printf("memory size : %ld\n", sizeof(s7));
	printf("num char    : %lu\n\n", strlen(s7));
	if (strcmp(s6[0], s7[6]) == 0)
	{
		printf("good\n");
	}
	else
	{
		printf("bad\n");
	}
}

void display(char *t)
{
	unsigned long index = 0;
	do
	{
		printf("%3d ", t[index]);
	} while (t[index++] != 0);
	puts("");
	for (index = 0; index < strlen(t); index++)
	{
		printf("%2c  ", t[index]);
	}
	puts("");
}