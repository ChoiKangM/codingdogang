#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	// STring conCATenate
	// strcat(최종문자열, 붙일문자열);
	// 		-char * strcat(char * _Destination, char const * _Source);
	// 		-최종 문자열의 포인터를 반환
	
	char secondArray[10] = ", world";
	char firstArray[20] = "Hello";
	char * secondPointer = ", world"; 
	char * firstPointer = malloc(sizeof(char) * 20);
	strcpy(firstPointer,"Hello");
	strcat(firstPointer,secondPointer);
	printf("concatenate pointer = %s\n",firstPointer);
	strcat(firstArray,secondArray);
	printf("concatenate array = %s\n",firstArray);
	free(firstPointer);
	return 0;
}