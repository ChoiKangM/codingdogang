#include <stdlib.h>
#include <stdio.h>
int main()
{
	// Ascii string TO Integer
	// atoi(문자열);
	// 		-int atoi(char const * _String);
	// 		-성공하면 변환된 정수를 반환, 실패하면 0을 반환
	
	char * numString = "283";
	int numInt;
	numInt = atoi(numString);
	
	printf("numInt = %d\n",numInt);
	return 0;
}


// atoi 함수는 문자열이 처음부터 시작해 숫자가 아닐때까질 정수로 바꾼다.
// 	처음부터 숫자가 아니라면 0으로 반환된다.
// 283a -> 283
// 283a30 -> 283	
// 283! -> 283	
// 283!30 -> 283	
// a30 -> 0	
// !30 -> 0
// abc -> 0	
// !@# -> 0	