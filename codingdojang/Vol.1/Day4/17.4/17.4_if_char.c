#include <stdio.h>
int main()
{
	float num = 0.1f;
	char c = 'a';
	if(num==0.1f)
		printf("0.1입니다.\n");
	if(c=='a')
		printf("a입니다.\n");
	if(c==97)	//문자를 ASCII 코드로 비교
		printf("a입니다.\n");
	
	return 0;
}