#include <stdio.h>
int main()
{
	float float1 = 11.0f;
	float float2 = 5.0f;
	int int1 = float1 / float2;	//실수에서 실수를 나누면 2.2이지만 정수 자료형에는 2만 저장되고 0.2는 버려짐
	char char1 = 28;
	int int2 = 1000000002;
	char char2 = char1 + int2;	//char보다 큰 숫자는 저장할 수 없어 28+2만 남고 앞 자릿수는 버려짐
	printf("%d\n",int1);
	printf("%d\n",char2);
	return 0;
}