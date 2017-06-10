#include <stdio.h>
int main()
{
	unsigned char one = 1;			// 0000 0001
	unsigned char three = 3;		// 0000 0011
	printf("%d\n", one & three);	// 0000 0001
	printf("%d\n", one | three);	// 0000 0011
	printf("%d\n", one ^ three);	// 0000 0010
	
	unsigned char plus162 = 162;		// 162 : 1010 0010
	unsigned char minus162;
	minus162 = ~plus162;
	printf("%u\n",minus162);			// 93  : 0101 1101: plus162의 비트 값을 뒤집음
	unsigned char twenty4 = 24;		// 0001 1000
	printf("%u\n", three << 3);		// 0000 0011 => 0001 1000
	printf("%u\n", twenty4 >> 2);	// 0001 1000 => 0000 0110
	
	
	return 0;
}