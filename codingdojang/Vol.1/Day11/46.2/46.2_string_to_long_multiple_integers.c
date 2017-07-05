#include <stdlib.h>
#include <stdio.h>
int main()
{
	// STRing TO Long
	// strtol(문자열,끝포인터,진법);
	// 		-long strtol(char const * _String,char ** _EndPtr, int _Radix);
	// 		-성공하면 변환된 정수를 반환, 실패하면 0을 반환
	char * charString = "0xaf10";
	int stringToInt;
	char * multipleIntCharString = "0xaf10 42 0x27C 9952";
	int multipleStringToInt1;
	int multipleStringToInt2;
	int multipleStringToInt3;
	int multipleStringToInt4;
	char * stringEnd;
	
	stringToInt = strtol(charString,NULL,16);		//16진법으로 표기된 문자열을 정수로 변환
	multipleStringToInt1 = strtol(multipleIntCharString,&stringEnd,16);		//16진법으로 표기된 문자열을 정수로 변환
	multipleStringToInt2 = strtol(stringEnd,&stringEnd,10);	
	multipleStringToInt3 = strtol(stringEnd,&stringEnd,16);	
	multipleStringToInt4 = strtol(stringEnd,NULL,10);	
	printf("16진법 : %x\n10진법 : %d\n",stringToInt,stringToInt);
	printf("multipleStringToInt1 = %x\n",multipleStringToInt1);
	printf("multipleStringToInt2 = %d\n",multipleStringToInt2);
	printf("multipleStringToInt3 = %x\n",multipleStringToInt3);
	printf("multipleStringToInt4 = %d\n",multipleStringToInt4);
	return 0;
}