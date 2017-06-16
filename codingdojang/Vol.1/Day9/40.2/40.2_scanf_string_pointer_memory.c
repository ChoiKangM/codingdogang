#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
int main()
{
	// char * st = "Hello";		//선언 후 할당
	// scanf("%s",st);
	// printf("%s\n",st);		//잘못된 예시
	
	char * st = malloc(sizeof(char) * 30);
	
	printf("문자열을 입력하세요: ");
	scanf("%[^\n]s",st);
	
	printf("%s\n",st);
	
	free(st);
	return 0;
}