#include <stdio.h>
int main()
{
	int *numPtr = 0x100;		// 포인터에 0x100을 직접 저장
	printf("%d\n",*numPtr);		// 0x100은 잘못된 메모리 주소이므로 실행 에러
	
	//실제로 존재하는 메모리 주소라면 포인터에 직접 저장 가능
	//int *numPtr = 0x00CCFC2C;
	//임베디드 시스템이나 마이크로프로세서에서 제공하는 메모리 주소를 사용할 때 포인터에 직접 저장하기도 한다.
	
	return 0;
}