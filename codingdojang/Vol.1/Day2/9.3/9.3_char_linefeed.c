#include <stdio.h>
int main()
{
	char a = 'a';
	char b = 'b';
	char lineFeed = '\n';
	
	printf("%c%c%c%c",a,lineFeed,b,lineFeed);
	printf("%d 0x%x\n",lineFeed,lineFeed);
	
	return 0;
}