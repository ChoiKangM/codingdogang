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
	return 0;
}