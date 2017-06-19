#include <string.h>
#include <stdio.h>
int main()
{
	// STRing CHaRacter
	// strchr(대상문자열, 검색할문자);
	// 		-char * strchr(char * const _String, int const _Ch);
	// 		-문자를 찾았으면 문자로 시작하는 문자열의 포인터를 반환, 문자가 없으면 NULL을 반환
	char stringArray[30] = "A Garden Diary";
	
	char * charPtr = strchr(stringArray,'a');		//'a'로 시작하는 문자열 검색, 포인터 반환
	
	while(charPtr != NULL)							//검색된 문자열이 없을 때까지 반복
	{
		printf("%s\n", charPtr);					//검색된 문자열 출력
		charPtr = strchr(charPtr + 1, 'a');			//포인터에 1을 더하여 a 다음부터 검색
	}
	
	return 0;
}