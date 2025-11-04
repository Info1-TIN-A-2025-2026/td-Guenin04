#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	const int I_MIN = 10;
	const int I_MAX = 20;
	int i = 0;
	do
	{
		int ret = 0;
		printf("Enter a integer value in range[%d..%d] : ", I_MIN, I_MAX);
		ret = scanf("%d", &i);
		if (ret != 1)
		{
			while (getchar() != '\n')
				; // clear input buffer
				  // 		// char c = 0;
				  // 		// do{
				  // 		// 	c = getchar();
				  // 		// } while (c != '\n');
		}
	} while ((i < I_MIN) || (i > I_MAX));
	printf("i = %d\n", i);

	return 0;
}