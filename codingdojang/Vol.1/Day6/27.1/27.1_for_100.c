#include <stdio.h>
int main()
{
	// for(초기식;조건식;변화식)
	// {
	// 	반복할 코드;	
	// } 초기식 -> 조건식 -> 반복할 코드 -> 변화식 순으로 진행
	for(int i=0;i<100;i++)		//C99 - 초기식에 변수 선언 but gcc에선 컴파일 에러(-std=c99 or -std=c11 옵션 사용하면 ㄱㅊㄱㅊ) 
	{
		printf("%d - Hello, world!\n",i);
	}
	return 0;
}