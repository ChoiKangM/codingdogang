#include <stdio.h>
int main()
{
	int num1 = 2;
	int num2 = 2;
	printf("%d %d\n",num1++,num2--);		//print하고 나서 연산자 실행
	printf("%d %d\n",num1,num2);
	printf("%d %d\n",++num1,--num2);		//연산자하고 나서 print 실행
	printf("%d %d\n",num1,num2);
	return 0;
}