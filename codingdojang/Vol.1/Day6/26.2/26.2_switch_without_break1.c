#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	scanf("%d",&num);		//1 입력해보자
	switch(num)
	{
		case 1:
			printf("1입니다.\n");
		case 2:
			printf("2입니다.\n");
		case 3:
			printf("3입니다.\n");
		default:
			printf("default\n");
	}
	return 0;
}