#include <stdio.h>
#include <float.h>

int main()
{
	float num1 = FLT_MIN;
	float num2 = FLT_MAX;
	
	num1 = num1 / 100000000.0f;		//아주 작은수가 되면서 언더플로우가 된다. C언어는 이를 0으로 출력
	num2 = num2 * 1000.0f;			//오버플로우 되어 inf출력
	printf("%e %e\n", num1, num2);
	return 0;
}