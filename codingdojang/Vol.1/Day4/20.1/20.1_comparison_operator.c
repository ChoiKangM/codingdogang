#include <stdio.h>
int main()
{
	int num = 10;
	printf("%d\n",num == 10);	//참
	printf("%d\n",num != 5);	//참
	
	printf("%d\n",num > 10);	//거짓
	printf("%d\n",num < 10);	//거짓
	
	printf("%d\n",num >= 10);	//참
	printf("%d\n",num <= 10);	//참
	return 0;
}