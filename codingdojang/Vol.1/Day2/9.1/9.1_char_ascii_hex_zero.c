#include <stdio.h>

int main()
{
	char a = 'a';
	char b = 'b';
	char c = 99;
	char d = 100;
	char e = 0x65;
	char f = 0x66;
	char char_zero = '0';
	char int_zero = 0; 
	
	//char를 %c로 출력하면 문자가 출력되고 %d로 출력되면 정숫값이 출력됨
	printf("%c, %d\n",a,a);		//a, 97: a의 ASCII 코드 값은 97
	printf("%c, %d\n",b,b);		//b, 98: b의 ASCII 코드 값은 98
	
	printf("%c, %d\n",c,c);		//c, 99: a의 ASCII 코드 값은 99
	printf("%c, %d\n",d,d);		//d, 100: a의 ASCII 코드 값은 100
	
	printf("%c, %d, 0x%x\n",e,e,e);		//e, 101, 0x65
	printf("%c, %d, 0x%x\n",f,f,f);		//f, 102, 0x66

	printf("%c, %d\n",char_zero,char_zero);		//0, 48: 문자 상태로 0이 출력됨, 문자 0의 ASCII 코드 48이 출력됨
	printf("%c, %d\n",int_zero,int_zero);		//NULL, 0: 0: ACSII 코드 0 은 NULL이므로 아무것도 출력 X, 정수 0이 출력됨
	
	return 0;
}