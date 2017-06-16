#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char st[30];
	
	printf("문자열을 입력하세요: ");
	scanf("%[^\n]s",st);		//일반 변수일 땐 &붙여야 하고, 배열은 앞에 &를 붙이지 않음
							//%[^\n]s와 같이 지정하면 공백까지 포함하여 문자열을 입력 받을 수 있다.
	printf("%s\n",st);
	
	return 0;

}

// scanf("%s",배열);
// 		-int scanf(char const *const _Format, ...);
// 		-성공하면 가져온 값의 개수를 반환, 실패하면 EOF(-1) 반환

// scanf에서 서식 지정자 %s로 문자열을 저장할 때 입력된 문자열에 공백이 있다면 배열엔 공백 직전까지만 저장된다.
// 문자열을 저장하고 남는 자리엔 전부 NULL이 들어간다.
// EOF = End Of File의 약자
// windows : Ctrl + Z
// linux   : Ctrl + D
// EOF는 stdio.h 헤더 파일에 정의되어 있으며 정수 -1이다.
// 보통 EOF는 파일 처리 함수가 실패했을 때 반환됩니다.