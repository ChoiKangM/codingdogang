#include <stdio.h>
int main()
{
	unsigned char flag = 0;		//0000 0000
	//특정 비트가 켜져 있는지 검사할땐 & 연산자 사용 					(Examine)
	//특정 비트를 켜는 동작을 수행할땐 | 연산자 사용					(On)
	//특정 비트를 끄는 동작을 수행할땐 &= ~마스크 사용					(Off)
	//특정 비트가 켜져있으면 끄고 꺼져있으면 키는 동작엔  ^=마스크 사용   (toggle)
	flag |= 1;	// 0000	0001 마스크(플래그의 비트를 조작하거나 검사할 때 사용하는 숫자)와 비트 OR로 여덟번째 비트를 켬
	flag |= 2;	// 0000	0010 마스크와 비트 OR로 일곱번째 비트를 켬
	flag |= 4; 	// 0000	0100 마스크와 비트 OR로 여섯번째 비트를 켬
	
	printf("flag = %u\n",flag);
	
	if(flag & 1)		// & 연산자로 0000 0001 비트가 켜져 있는지 확인
		printf("0000 0001은 켜져 있음\n");
	else
		printf("0000 0001은 꺼져 있음\n");
	
	if(flag & 2)		// & 연산자로 0000 0010 비트가 켜져 있는지 확인
		printf("0000 0010은 켜져 있음\n");
	else
		printf("0000 0010은 꺼져 있음\n");
	
	if(flag & 4)		// & 연산자로 0000 0100 비트가 켜져 있는지 확인
		printf("0000 0100은 켜져 있음\n");
	else
		printf("0000 0100은 꺼져 있음\n");
	
	
	flag &= ~2;			// 1111 1101, 마스크 값 2의 비트를 뒤집은 뒤 비트 AND로 일곱 번째 비트를 끔
	printf("After off seventh bit, flag = %u\n",flag);
	
	if(flag & 1)		// & 연산자로 0000 0001 비트가 켜져 있는지 확인
		printf("0000 0001은 켜져 있음\n");
	else
		printf("0000 0001은 꺼져 있음\n");
	
	if(flag & 2)		// & 연산자로 0000 0010 비트가 켜져 있는지 확인
		printf("0000 0010은 켜져 있음\n");
	else
		printf("0000 0010은 꺼져 있음\n");
	
	if(flag & 4)		// & 연산자로 0000 0100 비트가 켜져 있는지 확인
		printf("0000 0100은 켜져 있음\n");
	else
		printf("0000 0100은 꺼져 있음\n");
	
	flag ^= 2;
	flag ^= 8;
	printf("After toggle second and fourth bit, flag = %u\n",flag);
	if(flag & 1)		// & 연산자로 0000 0001 비트가 켜져 있는지 확인
		printf("0000 0001은 켜져 있음\n");
	else
		printf("0000 0001은 꺼져 있음\n");
	
	if(flag & 2)		// & 연산자로 0000 0010 비트가 켜져 있는지 확인
		printf("0000 0010은 켜져 있음\n");
	else
		printf("0000 0010은 꺼져 있음\n");
	
	if(flag & 4)		// & 연산자로 0000 0100 비트가 켜져 있는지 확인
		printf("0000 0100은 켜져 있음\n");
	else
		printf("0000 0100은 꺼져 있음\n");
	
	if(flag & 8)		// & 연산자로 0000 0100 비트가 켜져 있는지 확인
		printf("0000 1000은 켜져 있음\n");
	else
		printf("0000 1000은 꺼져 있음\n");
	return 0;
}