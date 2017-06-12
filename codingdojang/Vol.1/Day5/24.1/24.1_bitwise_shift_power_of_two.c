#include <stdio.h>
int main()
{
	unsigned char one = 1;			// 1: 0000 0001
	
	printf("%u\n",one << 1);		// 2: 0000 0010
	printf("%u\n",one << 2);		// 4: 0000 0100
	printf("%u\n",one << 3);		// 8: 0000 1000
	printf("%u\n",one << 4);		// 16: 0001 0000
	printf("%u\n",one << 5);		// 32: 0010 0000
	printf("%u\n",one << 6);		// 64: 0100 0000
	printf("%u\n",one << 7);		// 128: 1000 0000
	
	return 0;
}