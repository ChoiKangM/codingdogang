#include <stdio.h>
int main()
{
	char * st = "Hello";
	printf("st[1] = %c\n",st[1]);
	printf("st[4] = %c\n",st[4]);
	printf("st[5] = %c\n",st[5]);
	
	printf("Assigning element is impossible\nst[0] = 'A';\n"); // 불가능
	return 0;
}