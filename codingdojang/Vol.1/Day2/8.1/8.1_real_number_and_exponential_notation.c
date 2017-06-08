#include <stdio.h>
int main()
{
	float num1 = 0.1f;						//단정밀도 부동소수점 변수를 선언하고 값을 할당
											//float는 숫자 뒤에 f를 붙임
	double num2 = 3867.215820;				//배정밀도 부동소수점 변수를 선언하고 값을 할당
											//double은 숫자 뒤에 아무것도 붙이지 않음
	long double num3 = 9.327513l;			//배정밀도 부동소수점 변수를 선언하고 값을 할당
											//long double은 숫자 뒤에 l을 붙임
	printf("%f %f %Lf\n",num1,num2,num3);
	
	float num4 = 3.e5f;						//지수 표기법으로 3 * 10^5 = 300000을 표기
											
	double num5 = -1.3827e-2;				//지수 표기법으로 -1.3827 * 10^-2 = -0.013827을 표기 
	
	long double num6 = 5.21e+9l;			//지수 표기법으로 5.21 * 10^9 = 5210000000을 표기
	
	printf("%f %f %Lf\n",num4,num5,num6);	//%f => 일반 실수 표기
	
	printf("%e %e %Le\n",num4,num5,num6);	//%e => 지수 표기법
	return 0;
								
}