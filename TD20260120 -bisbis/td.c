#include <stdio.h>
#include <stdint.h>

int main(int argc, const char *argv[])
{
	// char 2 dimensions array demonstration
	char mots[5][10] = {"boa", "dia", "todo", "mara"};
	/*
	mots[0][x]	|b	|o	|a	|	|	|	|	|	|	|	|
	mots[2][x]	|d	|i	|a	|	|	|	|	|	|	|	|
	mots[3][x]	|t	|o	|d	|o	|	|	|	|	|	|	|
	mots[4][x]	|m	|a	|r	|a	|	|	|	|	|	|	|
	mots[5][x]	|	|	|	|	|	|	|	|	|	|	|
	*/
	int number[5][10] = {{1, 2}, {2}, {3, 7, 3, 4, 5, 5, 74, 150, 23, 1}, {4}, {5, 90}};
	/*
	mots[0][x]	|1	|2	|	|	|	|	|	|	|	|	|
	mots[2][x]	|2	|	|	|	|	|	|	|	|	|	|
	mots[3][x]	|3	|7	|3	|4	|5	|5	|74	|150|23	|1	|
	mots[4][x]	|4	|	|	|	|	|	|	|	|	|	|
	mots[5][x]	|5	|90	|	|	|	|	|	|	|	|	|
	*/
}
