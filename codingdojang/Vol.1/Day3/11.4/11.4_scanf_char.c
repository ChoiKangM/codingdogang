#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>

int main()
{
	char c1;
	printf("문자를 입력하시오: ");
	scanf("%c",&c1);		//getchar, putchar 사용가능!!
	
	printf("%c\n",c1);
	
	return 0;
}