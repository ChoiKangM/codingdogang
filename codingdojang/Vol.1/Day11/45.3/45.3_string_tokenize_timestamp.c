#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int main()
{
	char time[30] = "2015-06-10T15:32:19";
	char * charPtr = strtok(time,"-T:");		// -	T	:	을 기준으로 문자열을 자른다.
												//해당하는 문자 자리를 NULL로 채운 뒤 포인터 반환
	while(charPtr != NULL)
	{
		printf("%s\n",charPtr);					//NULL이 끝날땔 문자열 끝이라 판단해 첫번째 문자열 조각을 출력
		charPtr = strtok(NULL,"-T:");			//strtok에 NULL을 넣어 앞에서 잘린 문자열 만큼 다음 문자로 이동
	}
	
	return 0;
}