#include <stdio.h>
int main()
{
	int i;
	for(i=0;i<10;i++)		//C99 - 초기식에 변수 선언 but gcc에선 컴파일 에러(-std=c99 or -std=c11 옵션 사용하면 ㄱㅊㄱㅊ) 
	{
		printf("%d - Hello, world!\n",i);
	}		//
	printf("%d\n",i);
	return 0;
}