#include <stdio.h>
int main()
{
	int *numPtr;
	int num = 10;
	
	numPtr = &num;
	
	printf("%p\n",numPtr);
	printf("%p\n",&num);
	return 0;
	// 자료형 *포인터이름; -> *(Asterisk,애스터리스크)
	// 	int* numPtr;
	// 	int * numPtr;
	// 	int *numPtr;
	// 포인터 = &변수;
	// 	numPtr = &num;
	
	// 		  numPtr											num
	// ----------------------							---------------------
	// |					|							|					|	
	// |  num1의 메모리 주소	|------------------------->	|		 10			|
	// |					|							|					|
	// ----------------------							---------------------
	
	// 32비트와 64비트 운영체제에 따라 포인터의 크기가 달라진다.
	// 32비트 -> 4바이트
	// 64비트 -> 8바이트
}