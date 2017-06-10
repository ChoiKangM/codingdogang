#include <stdio.h>
#include <stdbool.h>
int main()
{	
	bool b = true;
	if(b == true)
		printf("참\n");
	else 
		printf("거짓\b");
	
	printf("int의 크기: %ld\n",sizeof(int));	//4
	printf("bool의 크기: %ld\n",sizeof(bool));	//1
	return 0;
}