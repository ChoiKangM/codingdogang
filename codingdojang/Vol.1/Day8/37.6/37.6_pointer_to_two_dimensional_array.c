#include <stdio.h>
int main()
{
	
	int numArr[3][4] ={
		{ 11, 22, 33, 44 },
		{ 55, 66, 77, 88 },
		{ 99, 110, 121, 132}
	};
	
	//int **numPtr = numArr;				//자료형이 달라 에러가 발생!!
	//printf("%d\n", numPtr[0][0]);
	
	int (*numPtr)[4] = numArr;
	//2차원 배열을 포인터에 바로 할당 가능!! 단, 자료형과 가로 크기가 일치해야 한다!!
	printf("*numPtr = %p\n", *numPtr);					//2차원 배열 포인터를 역참조하면
														//세로 첫 번째의 주소가 나옴
														//컴퓨터마다 실행할 때마다 달라짐
	printf("numArr = %p\n",numArr);						//2차원 배열을 역참조하면
														//세로 첫 번째의 주소가 나옴
														//컴퓨터마다 실행할 때마다 달라짐
	printf("numPtr[2][1] = %d\n",numPtr[2][1]);			// 110: 2차원 배열 포인터는 인덱스로 접근할 수 있음
	printf("sizeof(numArr) = %lu\n",sizeof(numArr));		// 48: sizeof로 2차원 배열의 크기를 구하면 
														//배열이 메모리에 차지하는 공간이 출력됨
	printf("sizeof(numPtr) = %lu\n",sizeof(numPtr));		// 4 : sizeof로 2차원 배열 포인터의 크기를 구하면
														//포인터의 크기가 출력됨(64비트라면 8)

	return 0;
}