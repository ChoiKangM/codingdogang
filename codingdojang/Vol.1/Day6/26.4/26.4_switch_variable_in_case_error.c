#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	scanf("%d",&num);		//1 입력해보자
	switch(num)
	{
		case 1:		//Visual Studio 2013이하나 GCC에선 case 부분을 중괄호로 묶어야 컴파일 에러 없이 변수를 선언할 수 있다.
		{			//단 중괄호 안에 선언된 변수는 해당 case 안에서만 사용 가능하다.
			int numResult = num;
			printf("%d입니다.\n",numResult);
			break;
		}
		case 2:
			printf("2입니다.\n");
			break;
		case 3:
			printf("3입니다.\n");
			break;
		default:
			printf("default\n");
	}
	return 0;
}