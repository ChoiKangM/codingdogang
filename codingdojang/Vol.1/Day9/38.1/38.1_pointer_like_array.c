#include <stdlib.h>
#include <stdio.h>
int main()
{
	int * numPtr = malloc(sizeof(int)*10);	//int 10개 크기만큼 동적 메모리 할등
	//자료형 * 포인터이름 = malloc(sizeof(자료형)*크기);
	
	//배열[인덱스] == 포인터[인덱스]
	
	numPtr[0] = 10;							//배열처럼 인덱스로 접근하여 값 할당
	numPtr[9] = 20;							//배열처럼 인덱스로 접근하여 값 할당
	
	printf("numPtr[0] = %d\n",numPtr[0]);
	printf("numPtr[9] = %d\n",numPtr[9]);
	
	free(numPtr); 							//동적으로 할당한 모메리 해제
	return 0;
}