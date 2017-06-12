#include <stdio.h>
int main()
{
	unsigned char unsignedChar = 131;		//  131: 1000 0011
	char signedMinusChar = -125;			// -125: 1000 0011
	char signedPluschar = 67;				//  67 : 0100 0011
	char overwriteEx1 = 113;				//  113: 0111 0001
	char overwriteEx2 = -15;				//  -15: 1111 0001
	
	printf("%u\n",unsignedChar >> 5);		//    4: 0000 0100			//비트 연산자는 부호 있는 자료형과 부호 없는 자료형이 다르게 동작한다.
	printf("%d\n",signedMinusChar >> 5);	//   -4: 1111 1100			//한 연산자 안에서 모자라는 공간은 모두 부호 비트의 값으로 채워지기 때문
																		//부호가 없는 자료형은 비트를 오른쪽으로 이동하면 모자라는 공간은 모두 0으로 채워진다
	
	printf("%d\n",signedPluschar >> 5);		//    2: 0000 0010
	
	printf("%d\n",overwriteEx1 << 2);		//   -60: 1100 0100			//부호비트를 덮어쓰게 되어 양수에서 음수가 됨
	printf("%d\n",overwriteEx2 << 2);
	printf("%d\n",overwriteEx1 << 4);
	printf("%d\n",overwriteEx2 << 4);
	return 0;
}