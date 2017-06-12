#include <stdio.h>
int main()
{
	// 초기식
	// do
	// {
	// 	반복할 코드
	// 	변화식
	// }while(조건식);
	int i = 0;
	do{
		printf("Hello, world! %d\n",i);
		i++;
	}while(i < 100);
	return 0;
}