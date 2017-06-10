#include <stdio.h>
int main()
{
	int n20 = 20,n10=10,n30=30,n15=15;
	printf("%d\n",n20>n10 && n30>n15);	//1 && 1 = 1
	printf("%d\n",n20>n10 && n30<n15);	//1 && 0 = 0
	
	printf("%d\n",n20>n10 || n30<n15);	//1 || 0 = 1
	printf("%d\n",n20<n10 || n30<n15);	//0 || 0 = 0
	
	printf("%d\n",!(n20>n10));			//!(1) = 0
	return 0;
}