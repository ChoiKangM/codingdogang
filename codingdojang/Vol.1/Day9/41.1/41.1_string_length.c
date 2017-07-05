#include <string.h>
#include <stdio.h>
int main()
{	
	// strlen(문자열포인터);
	// strlen(문자열배열);
	// 	-size_t strlen(const *_Str);
	// 	-문자열의 길이를 반환
	char *stPointer = "Hello";
	char stArray[10] = "Hello";
	printf("string Pointer length = %u\n",strlen(stPointer));
	printf("string Array length = %u\n",strlen(stArray));
	return 0;
}