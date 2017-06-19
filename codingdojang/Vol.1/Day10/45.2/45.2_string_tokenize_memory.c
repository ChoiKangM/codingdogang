#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	char * stringPointer = malloc(sizeof(char) * 30);
	strcpy(stringPointer,"The Little Prince");
	char * charPtr = strtok(stringPointer, " ");		
	while(charPtr != NULL)							
	{
		printf("%s\n",charPtr);						
		charPtr = strtok(NULL, " ");				
	}
	
	free(charPtr);
	return 0;
}