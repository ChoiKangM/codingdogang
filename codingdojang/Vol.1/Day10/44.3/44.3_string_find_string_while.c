#include <string.h>
#include <stdio.h>
int main()
{
	// STRing (find) STRing
	// strstr(대상문자열, 검색할문자열);
	// 		-char * strstr(char * const _String, char const * const _SubString);
	// 		-문자열을 찾았으면 문자열로 시작하는 문자열의 포인터를 반환, 문자열이 없으면 NULL로 반환
	
	char stringArray[100] = "A Garden Diary A Garden Diary A Garden Diary";
	char * charPtr = strstr(stringArray, "den");		//den으로 시작하는 문자열 검색
	while(charPtr != NULL)								//없을때 까지 검색
	{
		printf("%s\n",charPtr);
		charPtr = strstr(charPtr + 1, "den");			//den 포인터에 1을 더하여 e부터 검색
	}
	return 0;
}