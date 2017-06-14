#include <stdio.h>
int main()
{
	long long *longlongPtr;
	float *floatPtr;
	char *charPtr;
	
	long long longlongData = 10;
	float floatData = 3.5f;
	char charData = 'a';
	
	longlongPtr = &longlongData;
	floatPtr = &floatData;
	charPtr = &charData;
	
	printf("%lld\n",*longlongPtr);	 
	printf("%f\n",*floatPtr);
	printf("%c\n",*charPtr);
	
	// 	long long *longlongPtr								|---------------8바이트----------|
	// --------------------------							---------------------------------
	// |						|							|								|	
	// |longlongPtr의 메모리 주소	|-------------------------->|				10				|
	// |						|							|								|
	// --------------------------							---------------------------------
	
	// 		float *floatPtr									|----4바이트-----|
	// --------------------------							-----------------
	// |						|							|				|	
	// | floatPtr의 메모리 주소	|-------------------------->|		3.5		|
	// |						|							|				|
	// --------------------------							-----------------
	
	// 		char *charPtr									|-1바이트-|
	// --------------------------							---------
	// |						|							|		|	
	// | charPtr의 메모리 주소	|-------------------------->|	a	|
	// |						|							|		|
	// --------------------------							---------
	
	
	//상수와 포인터 정리
	//const 포인터를 읽는 방법 - 포인터는 무조건 역순으로 읽으면 쉽습니다.
	//int *: pointer to int
	//int const *: pointer to const int
	//int * const: const pointer to int
	//int const * const: const pointer to const int
	//int ** const: const pointer to pointer to int
	//int * const * const: const pointer to const pointer to int
	//const pointer는 포인터의 주소가 바뀌지 않는다는 뜻이고, const int는 int 상수 값이 바뀌지 않는다는 뜻입니다.
	//보통은 const int라고 쓰지만 int const도 됩니다. 그래서 int const * const p;라고 쓰면 p는 const pointer to const int입니다.
	//이처럼 const의 순서만 바꿔서 역순으로 읽으면 자료형을 쉽게 읽을 수 있습니다.
	return 0;
}