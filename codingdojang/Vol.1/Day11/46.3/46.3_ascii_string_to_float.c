#include <stdlib.h>
#include <stdio.h>
int main()
{
	// Ascii string TO Float
	// atof(문자열);
	// 		-double atof(char const * _String);
	// 		-성공하면 변환된 실수를 반환, 실패하면 0을 반환
	
	char * stringToFloat = "35.283672";
	char * stringExponenToFloat = "3.e5";
	float numFloat;
	float expoNumFloat;
	numFloat = atof(stringToFloat);
	expoNumFloat = atof(stringExponenToFloat);
	printf("numfloat = %f\n",numFloat);
	printf("expoNumFloat = %e\nexpoNumFloat = %f\n",expoNumFloat,expoNumFloat);
	
	return 0;
}