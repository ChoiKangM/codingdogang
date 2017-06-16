#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char st[10];
	char sr[10];
	
	printf("문자열을 두 개 입력하세요 ");
	scanf("%s %s",st,sr);
	printf("st = %s\n",st);
	printf("sr = %s\n",sr);
	return 0;
}
// 입력 값을 문자열에 저장하는 방법을 배웠는데 문자열 리터럴이 할당된 포인터에는 쓰기가 안된다는 부분이 있었습니다.
// 이 부분은 운영체제에 관련된 내용이라 이해하지 않고 넘어가도 됩니다
// 일단은 문자열 리터럴이 할당된 포인터는 변경할 수 없다는 점만 기억하세요