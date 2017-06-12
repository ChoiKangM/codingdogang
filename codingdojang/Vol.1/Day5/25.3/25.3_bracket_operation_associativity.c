#include <stdio.h>
int main()
{
	int result;
	int three = 3;
	result = 10 + 2 / (5 - 3) * ++three;
	printf("10 + 2 / (5 - 3) * ++three = %d\n",result);
	printf("(5 - 3) = 2\n");
	printf("++three = 4\n");
	printf("2 / 2 = 1 \n");
	printf("1 * 4 = 4\n");
	printf("10 + 4 = 14\n");
	return 0;
}