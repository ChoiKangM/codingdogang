#include <stdio.h>
int main()
{
	int *numPtr = NULL;
	printf("NULL pointer = %p\n",numPtr);
	return 0;
	//실무에선 포인터가 NULL이면 메모리를 할당하는 패턴을 주로 사용
	//if(numPtr == NULL)
	//{
	//	numPtr = malloc(1024);
	//}
}