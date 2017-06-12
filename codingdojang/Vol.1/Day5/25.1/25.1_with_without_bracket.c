#include <stdio.h>
int main()
{
	int withBracket,withoutBracket;
	withBracket = (35 + 1) * 2; 
	withoutBracket = 35 + 1 * 2;
	printf("(35 + 1) * 2 = %d \n",withBracket);
	printf("35 + 1 * 2 = %d \n",withoutBracket);
	printf("We have different values\n");
	return 0;
}