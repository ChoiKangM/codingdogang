#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int main()
{
	char charString[30] = "The Little Prince";
	char * charArray[10] = {NULL, };					//빈 배열로 선언 및 초기화
	
	int i = 0;
	
	char * charPtr = strtok(charString, " ");			//공백을 NULL로 바꾸고 첫번째 문자열 토큰 포인터 반환
	while(charPtr != NULL)
	{
		charArray[i] = charPtr;							//빈 배열에 문자열 토큰 포인터 보관
		i++;
		
		charPtr = strtok(NULL, " ");					//다음 문자열을 잘라서 포인터를 반환
	}
	for(int j = 0; j < 10; j++)
	{
		if(charArray[j] != NULL)						//배열에 NULL이 아닌 포인터가 저장되어 있으면
			printf("%s\n",charArray[j]);				//출력
	}
	return 0;
}