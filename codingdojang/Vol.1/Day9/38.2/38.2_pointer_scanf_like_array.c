#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int size;
	printf("input array size: ");
	scanf("%d",&size);
	int * numPtr = malloc(sizeof(int)*size);
	
	for(int i=0;i<size;i++)
	{
		numPtr[i] = i;
	}
	
	for(int i=0;i<size;i++)
	{
		printf("numPtr[%d] = %d\n",i,numPtr[i]);
	}
	free(numPtr);
	
	return 0;
}