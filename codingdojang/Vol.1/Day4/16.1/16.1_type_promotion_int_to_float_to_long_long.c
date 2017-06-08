#include <stdio.h>
int main()
{
	int int1 = 11;
	float float1 = 4.4f;
	long long long1 = 123456789000;
	int int2 = 10;
	
	printf("%f\n",int1 + float1);	//정수는 실수로 변환
	printf("%f\n",int1 - float1);	//C언어에선 자료형을 섞어서 쓰면 컴파일러에서 암시적 형변환(implicit type conversion)을 하게된다.
	printf("%f\n",int1 * float1);	//자료형의 크기가 큰 쪽, 표현 범위가 넓은 쪽으로 자동 변환된다. 
	printf("%f\n",int1 / float1);	//이를 형 확장(type promotion)이라 하고 값이 버려지지 않고 그래도 보전된다.
	
	printf("%lld\n",long1 + int2);	//정수는 long long으로 변환
	printf("%lld\n",long1 - int2);
	printf("%lld\n",long1 * int2);
	printf("%lld\n",long1 / int2);
	return 0;
}