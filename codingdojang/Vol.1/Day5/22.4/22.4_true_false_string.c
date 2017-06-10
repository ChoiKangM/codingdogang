#include <stdio.h>
#include <stdbool.h>
int main()
{
	bool btrue = true;
	bool bfalse = false;
	printf(btrue ? "true" : "false");
	printf("\n");
	printf(bfalse ? "true" : "false");
	printf("\n");
	printf("%s\n",btrue ? "true" : "false");
	printf("%s\n",bfalse ? "true" : "false");
	
	return 0;
}