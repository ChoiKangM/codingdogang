#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	// strcpy(대상문자열,원본문자열);
	// 		-char * strcpy(char * _Dest, char const * _Source);
	// 		-대상문자열의 포인터를 반환
	char * origin = "Hello";
	char arrayClone[10];
	char * pointerClone = malloc(sizeof(char) * 10);
	
	strcpy(arrayClone,origin);
	strcpy(pointerClone,origin);
	
	printf("After copy\n");
	printf("arrayClone = %s\n",arrayClone);
	printf("pointerClone = %s\n",pointerClone);
	
	free(pointerClone);
	return 0;
}