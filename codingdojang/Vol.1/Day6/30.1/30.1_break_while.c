#include <stdio.h>
int main()
{
	int num = 0;
	while(1)
	{
		num++;
		printf("%d\n",num);
		if(num == 100)
			break;		//break로 while문 탈출
	}
	return 0;
}