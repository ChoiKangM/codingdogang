#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{	// 문자열을 만들어서 따로 저장!!!
	// sprintf(배열,서식,값);
	// sprintf(배열,서식,값1,값2,...);
	// 		-int sprintf(char * const _Buffer, char const * const _Format, ...);
	// 		-성공하면 만든 문자열의 길이를 반환, 실패하면 음수를 반환
	char sprintfString[20];		// == char * sprintfString = malloc(sizeof(char) * 20);
	char sprintfAnything[30];
	
	sprintf(sprintfString, "Hello, %s", "world!");
	sprintf(sprintfAnything,"%c %d %f %e",'a',10,3.2f,1.123456e-21f);
	printf("sprintfString = %s\n",sprintfString);
	printf("sprintfAnything = %s\n",sprintfAnything);
	
	//문자열을 저장한 빈 배열을 버퍼(buffer)라고 부릅니다
	return 0;
}