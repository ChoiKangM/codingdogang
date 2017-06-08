#include <stdio.h>
int main()
{
	int num = 10;
	float flt = 0.1f;
	char c = 'a';
	if(num == 10)
		printf("10입니다.\n");
	if(num != 5)
		printf("5가 아닙니다.\n");
	if(num > 10)
		printf("10보다 큽니다.\n");
	if(num < 10)
		printf("10보다 작습니다.\n");
	if(num >= 10)
		printf("10보다 같거나 큽니다.\n");
	if(num <= 10)
		printf("10보다 같거나 작습니다.\n");
	if(flt >= 0.09f)
		printf("0.09보다 크거나 같습니다.\n");
	if(c =='a')
		printf("a입니다.\n");
	if(c ==97)
		printf("97입니다.\n");
	if(c < 'b')
		printf("b보다 작습니다.\n");
	
	return 0;
}