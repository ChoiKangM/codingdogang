#include <string.h>
#include <stdio.h>
int main()
{
	// strlen(문자열포인터);
	// strlen(문자배열);
	// 	  -size_t strlen(const * _Str);
	// 	  -문자열의 길이를 반환
	char * pointerString = "Hello";
	char arrayString[10] = "Hello";			//배열의 크기가 10이지만 실제로 안에 들어있는 Hello가 5글자이므로 5가 반환된다
	
	printf("pointerString's length = %lu\n",strlen(pointerString));
	printf("arrayString's length = %lu\n",strlen(arrayString));
	
	return 0;
}