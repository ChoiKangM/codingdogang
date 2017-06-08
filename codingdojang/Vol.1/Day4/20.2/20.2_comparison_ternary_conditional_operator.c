#include <stdio.h>
int main()
{
	int num1 = 10;
	int num2;
	
	
	num2 = num1 ? 100 : 200;    //num2 = (num1 != 0) ? 100 : 200;
	/*
	if(num1)
		num2 = 100;
	else
		num2 = 200;
	*/
	printf("%d\n",num2);
	return 0;
}