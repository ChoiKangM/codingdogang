#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 10;
	char ch = 'a';
	int *numPtr = &num;
	char *chPtr = &ch;
	
	void *voidPtr;
	
	//포인터 자료형이 달라도 컴파일 경고가 발생하지 않음
	voidPtr = numPtr;			//void 포인터에 int 포인터 저장
	//printf("%d", *voidPtr);	//void 포인터는 역참조할 수 없음	
	voidPtr = chPtr;			//void 포인터에 char 포인터 저장
	//printf("%c", *voidPtr);	//void 포인터는 역참조할 수 없음
	
	//포인터 자료형이 달라도 컴파일 경고가 발생하지 않음
	numPtr = voidPtr;			//int 포인터에 void 포인터 저장
	chPtr = voidPtr;			//char 포인터에 void 포인터 저장
	
	//void 포인터는 자료형이 정해지지 않은 특성 때문에 어떤 자료형으로 된 포인터든 모두 저장 가능
	//반대로 다양한 자료형으로 된 포인터에도 void 포인터를 저장할 수 있다.
	//이런 특성 때문에 void 포인터는 범용 포인터라고 함
	//즉 직접 자료형을 변환하지 않아도 암시적으로 자료형이 변환되는 방식
	
	//void 포인터는 자료형이 정해지지 않았으므로 값을 가져오거나 저장할 크기도 정해지지 않았습니다.
	//따라서 void 포인터는 역참조 불가
	
	//역참조 못하는 void 포인터를 쓰는 이유는 
	//함수에서 다양한 자료형을 받아들일때
	//함수의 반환 포인터를 다양한 자료형으로 된 포인터에 저장할 때
	//자료형을 숨기고 싶을 때 사용한다.
}