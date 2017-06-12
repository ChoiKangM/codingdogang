#include <stdio.h>
int main()
{
	int num = 1;
	while(num <= 100)
	{
		num++;
		
		if(num % 2 != 0)
			continue;		//continue로 while문의 이번 반복 건너뜀
		printf("%d\n",num);
	}
	return 0;
}