#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int main()
{
	// STRing TOKenize
	// strtok(대상문자열, 기준문자);
	// 		-char * strtok(char * _String,char const * _Delimiter);
	// 		-자른 문자열을 반환, 더는 자를 문자열이 없으면 NULL을 반환
	//		-기준문자를 NULL 문자로 채운 뒤 잘린 문자열의 포인터를 반환한다.
	//		-원본 문자열의 내용을 바꾸므로 사용에 주의해야 한다.
	char stringArray[30] = "The Little Prince";
	char * charPtr = strtok(stringArray, " ");		//" " 공백문자를 기준으로 문자열을 자르기, 포인터 반환
	while(charPtr != NULL)							//자른 문자열이 나오지 않을 때까지 반복
	{
		printf("%s\n",charPtr);						//자른 문자열 출력
		charPtr = strtok(NULL, " ");				//다음 문자열을 잘라서 포인터를 반환
	}
	
	return 0;
}