#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{	
	// 보통 프로그램을 작성하다 보면 중간의 코드는 무시하고 원하는 부분으로 건너뛰어햐하는 상황이 생깁니다. 이때 goto를 사용합니다.
	// goto는 레이블을 지정해서 사용합니다. 레이블은 끝에 :(콜론)을 붙이며 이름을 짓는 규칙은 변수와 같습니다.
	int num;
	printf("입력하시오\n");
	scanf("%d",&num);
	
	if(num != EOF)
		goto NUM;
	else
		goto EXIT;
	
NUM:
	printf("%d입니다.\n",num);
	goto EXIT;
EXIT:
	return 0;
}