#include <stdio.h>
int main()
{
	int num = 5;
	
	if(0)	//0이므로 거짓
		printf("참\n");
	else
		printf("거짓\n");
	
	if(2)		//0이 아니므로 참
		printf("참\n");
	else
		printf("거짓\n");	
	
	if(num = 10)	//num에 10을 할당하면 조건식엔 num만 남는다. num은 10이다. 0이외의 숫자는 참이므로 10은 참
		printf("10입니다\n");
	//실수를 방지하는 코드로 리터럴을 왼쪽에 두면 할당할 수가 없어 실수를 막아준다
	return 0;
}