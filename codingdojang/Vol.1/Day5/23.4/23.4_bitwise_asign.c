#include <stdio.h>
int main()
{
	unsigned char firstfour = 4;	// 4: 0000 0100
	unsigned char secondfour = 4;	// 4: 0000 0100
	unsigned char thirdfour = 4;	// 4: 0000 0100
	unsigned char fourthfour = 4;	// 4: 0000 0100
	unsigned char fifthfour = 4;	// 4: 0000 0100
	
	firstfour &= 5;						// (0000 0100) & (0000 0101) = 0000 0100 = 4
	secondfour |= 2;					// (0000 0100) | (0000 0010) = 0000 0110 = 6
	thirdfour ^= 3 ;					// (0000 0100) ^ (0000 0011) = 0000 0111 = 7
	fourthfour <<= 2;					// (0000 0100) 		<< 2 	 = 0001 0000 = 16
	fifthfour >>= 2;					// (0000 0100) 		>> 2 	 = 0000 0001 = 1
	
	printf("%u\n",firstfour);
	printf("%u\n",secondfour);
	printf("%u\n",thirdfour);
	printf("%u\n",fourthfour);
	printf("%u\n",fifthfour);
	return 0;
}