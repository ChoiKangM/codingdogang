#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num = 20;
	int *numPtr;
	int *mallocPtr;
	
	numPtr = &num;
	mallocPtr = malloc(sizeof(int));
	
	printf("numPtr = %p\n",numPtr);
	printf("mallocPtr = %p\n",mallocPtr);
	
	free(mallocPtr);
	
	return 0;
	//동적메모리 할당
	//malloc -> 사용 -> free
	// 포인터 = malloc(크기);
	// void *malloc(size_t_Size);
	// 성공하면 메모리 주소를 반환, 실패하면 NULL 반환
	/*
		0x00000000					-----------------------------
									|							|
									|---------------------------|
		0x006BFA60					|	  stack - variable(up) 	|
									|---------------------------|
									|							|
									|---------------------------|
		0x009659F0					|	    Heap - malloc(down)	|
									|---------------------------|
									|							|
		0xFFFFFFFF					-----------------------------
	
	*/
	// free(포인터);
	// void free(void *_Block);
}