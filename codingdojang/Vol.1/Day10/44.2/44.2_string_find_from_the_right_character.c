#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	// STRing (find from the Right) CHaRacter
	// strrchr(대상문자열, 검색할문자)
	// 		-char * strrchr(char * const _String,int const _Ch);
	// 		-문자를 찾았으면 문자로 시작하는 문자열의 포인터를 반환, 문자가 없으면 NULL로 반환
	
	char stringArray[30] = "A Garden Diary";
	
	char * charPtr = strrchr(stringArray,'a');
	
	printf("%s\n",charPtr);
	return 0;
}