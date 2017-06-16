#include <stdio.h>
int main()
{
	char ch = 'a';					//변수에 문자 'a' 저장
	char * st = "Hello";			//포인터에 문자열 "Hello"의 주소 저장
	
	printf("ch = %c\n",ch);
	printf("st = %s\n",st);
	
	return 0;
}
/*
			-------
char ch 	|  a  |
			-------							String
			------------------			 --------------------------	
char * st	| memory address |---------->| H | e | l | l | o | \0 |
			------------------			 --------------------------
*/