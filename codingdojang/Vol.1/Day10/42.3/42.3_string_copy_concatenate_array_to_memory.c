#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	char stringArray[10] = "Hello";
	char * stringPointer = malloc(sizeof(char) * 30);
	
	strcpy(stringPointer,stringArray);
	strcat(stringPointer,stringArray);
	
	printf("copy then concatenate = %s\n",stringPointer);
	free(stringPointer);
	
	return 0;
}