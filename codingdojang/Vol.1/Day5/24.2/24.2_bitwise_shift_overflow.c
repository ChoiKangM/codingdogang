#include <stdio.h>
int main()
{
	unsigned char num240 = 240;	// 240: 1111 0000
	unsigned char num15 = 15;   // 15:  0000 1111
	unsigned char twoleftshift,tworightshift;
	
	twoleftshift = num240 << 2;	// 1100 0000	- 첫째 혹은 마지막 자리를 넘어선 비트는 그대로 사라진다
	tworightshift = num15 >> 2; // 0000 0011
	//첫번째 비트 (Most Significant Bit, MSB)
	//마지막 비트 (Least Significant Bit, LSB)
	
	printf("%u\n",twoleftshift);
	printf("%u\n",tworightshift);
	return 0;
}