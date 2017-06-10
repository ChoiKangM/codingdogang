#include <stdio.h>
int main()
{
	int one = 1;
	int zero = 0;
	printf("%s\n",one && zero ? "참" : "거짓");
	printf("%s\n",one || zero ? "참" : "거짓");
	return 0;
}