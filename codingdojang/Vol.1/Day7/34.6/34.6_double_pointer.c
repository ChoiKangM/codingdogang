#include <stdio.h>
int main()
{
	int num = 10;
	int *numPtr;					//단일 포인터 선언
	int **numPtrPtr;				//이중 포인터 선언
	
	numPtr = &num;				//num의 메모리 주소 저장
	numPtr = &numPtrPtr;		//numPtr의 메모리 주소 저장
	
	printf("%d\n",**numPtrPtr);	//10: 포인터를 2번 역참조하여 num의 메모리 주소에 접근
	
	// 		**numPtrPtr								   *numPtr							num
	// --------------------------				---------------------			 ----------------
	// |						|				|				   	|			 |				|	
	// |  numPtr memory address |---------------|----> num memory	|------------|------>10		|
	// |						|				|  		address		|			 | 				|	
	// --------------------------				---------------------			 ----------------
	// 이중포인터(pointer to pointer to int) numPtrPtr을 끝까지 따라가 실제 값을 가져오려면 **numPtrPtr처럼 변수 앞에 역참조 연산자를 2번 사용하면 된다.
	// numPtrPtr <- numPtr <- num 같은 모양으로 num의 값을 가져올 수 있다.
	return 0;
}