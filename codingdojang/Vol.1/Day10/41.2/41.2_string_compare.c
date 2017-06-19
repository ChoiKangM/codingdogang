#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int main()
{
	// strcmp(문자열1, 문자열2);
	// 		-int strcmp(const * _Str1, char const * _Str2);
	// 		-문자열 비교 결과를 반환
	// 		- 1  : ASCII 코드 기준으로 문자열1이 클때
	// 		- 0  : ASCII 코드 기준으로 두 문자열이 같을 때
	// 		- -1 : ASCII 코드 기준으로 문자열2가 클때
	char * pointerString = "Hello";
	char arrayString[10] = "Hello";
	char * aaa = "aaa";
	char * aab = "aab";
	char * aac = "aac";
	int ret = strcmp(pointerString, arrayString);
	printf("strcmp(pointerString, arrayString) = %d\n",ret);
	printf("strcmp(aaa,aaa) = %d\n",strcmp(aaa,aaa));			//0
	printf("strcmp(aab,aaa) = %d\n",strcmp(aab,aaa));			//1
	printf("strcmp(aab,aac) = %d\n",strcmp(aab,aac));			//-1
	
	return 0;
}