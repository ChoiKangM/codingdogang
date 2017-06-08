#include<stdio.h>
int main()
{
	char num1 = -10;
	short num2 = 30000;
	int num3 = -1234567890;
	long num4 = 1234567890;
	long long num5 = -1234567890123456789;
	printf("%d %d %d %ld %lld\n",num1,num2,num3,num4,num5);
	unsigned char num6 = 200;
	unsigned short num7 = 60000;
	unsigned int num8 = 4123456789;
	unsigned long num9 = 4123456789;
	unsigned long long num10 = 2345678901234567890;
	printf("%d %d %d %ld %lld\n",num6,num7,num8,num9,num10);
}