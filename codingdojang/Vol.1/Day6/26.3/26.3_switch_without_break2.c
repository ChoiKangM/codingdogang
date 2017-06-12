#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	printf("숫자를 입력하시오\n");
	scanf("%d",&num);		//1 입력해보자
	switch(num)		//if else 문으로 일일이 조건식 나열보단 case에서 break문 생략이 유리하다
	{
		case 1: 		
		case 2:
			printf("1 또는 2입니다.\n");
			break;
		case 3: 
		case 4:			//case 1 << 2: 라고 쓸 수도 있다!! 단 식의 결과는 정수!
			printf("3 또는 4입니다.\n");
			break;
		default:
			printf("default\n");
	}
	return 0;
}