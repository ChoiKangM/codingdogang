#include <string.h>
#include <stdio.h>
int main()
{
	// strcmp(문자열1,문자열2);
	// 	-int strcmp(const *_Str1, char const *_Str2);
	// 	-문자열 비교 결과를 반환
	// 		 -1 : ASCII 코드 기준으로 문자열2가 클 때
	// 		  0 : ASCII 코드 기준으로 두 문자열이 같을 때
	// 		  1 : ASCII 코드 기준으로 문자열1가 클 때
	char * stPointer = "Hello";
	char stArray[10] = "Hello";
	int strCompare = strcmp(stPointer,stArray);
	printf("Compare with array and pointer = %d\n",strCompare);
	
	//ASCII: aaa = 97 97 97, aab = 97 97 98
	printf("strcmp(\'aaa\',\'aaa\') = %d\n",strcmp("aaa","aaa"));	// 0
	printf("strcmp(\'aaa\',\'aab\') = %d\n",strcmp("aaa","aab"));	//-1
	printf("strcmp(\'aab\',\'aaa\') = %d\n",strcmp("aab","aaa"));	// 1
	
	
	
	return 0;
}