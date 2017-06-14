#include <stdlib.h>
#include <stdio.h>
#include <string.h>	//memset 함수가 선언된 헤더파일
int main()
{
	//memset(포인터, 설정할값, 크기);
	//void * memset(void *_Dst,int _Val,size_t_Size);
	//값 설정이 끝난 포인터를 변환
	long long *numPtr = malloc(sizeof(long long));	//long long의 크기 8바이트만큼 동적 메모리 할당
	memset(numPtr,0x27,sizeof(long long));							//numPtr이 가리키는 메모리를 8바이트만큰 0x27로 설정
	printf("0x%llx\n",*numPtr);						//0x2727272727272727 : 27이 8개 들어가 있음
	free(numPtr);
	return 0;
	
	//보통 memset 함수는 주로 설정할 값을 0으로 지정하여 메모리의 내용을 모두 0으로 만들때 사용
	//memset(numPtr,0,8);
}