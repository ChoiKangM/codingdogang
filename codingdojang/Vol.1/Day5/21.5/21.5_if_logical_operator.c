#include <stdio.h>
int main()
{
	int itrue = 1,ifalse=0;
	if(itrue && ifalse)			//첫번째 값이 거짓이면 두번째 값 검사않고 거짓으로 결졍
		printf("참\n");
	else
		printf("거짓\n");
	
	if(itrue || ifalse)			//첫번째 값이 참이면 두번째 값 검사 않고 참으로 결정
		printf("참\n");
	else
		printf("거짓\n");
	
	if(!itrue)
		printf("참\n");
	else
		printf("거짓\n");
	
	return 0;
	
	//if((num1 != 0)&& (num2 / num1) < 20)	//num1이 0이면 나눗셈 연산을 하지 않는다. 단락 평가를 활용해 문제가 발생하는 코드 미리 예방 가능 
}