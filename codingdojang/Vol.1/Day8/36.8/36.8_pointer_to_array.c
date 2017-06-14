#include <stdio.h>
int main()
{
	int elevenArr[10];
	for(int i = 0; i<10;i++)
		elevenArr[i] = 11*(i+1);
	
	int *numPtr = elevenArr;
	printf("*numPtr = %d\n",*numPtr);						//배열의 주소가 들어있는 포인터를 역참조하면 배열의 첫번째 요소에 접근
	printf("*elevenArr = %d\n",*elevenArr);					//배열 자체를 역참조해도 배열의 첫 번째 요소에 접근
	
	printf("numPtr[5] = %d\n",numPtr[5]);					//배열의 주소가 들어있는 포인터는 인덱스로 접근 가능
	printf("sizeof(elevenArr)= %lu\n",sizeof(elevenArr)); 	//40 : 배열이 메모리에 차지하는 공간이 출력됨
	printf("sizeof(numPtr)= %lu\n",sizeof(numPtr));			//4 : sizeof로 배열의 주소가 들어있는 포인터의 크기를 구하면 포인터의 크기 출력(64비트라면 8)
	
	
	return 0;
}