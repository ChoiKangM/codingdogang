#include <stdio.h>
#include <math.h>
int main()
{
	printf("1 % 3 = %d\n",1%3);
	printf("2 % 3 = %d\n",2%3);
	printf("3 % 3 = %d\n",3%3);
	printf("4 % 3 = %d\n",4%3);
	printf("5 % 3 = %d\n",5%3);
	printf("6 % 3 = %d\n",6%3);
	printf("10.843 % 3.79 = %f",fmod(10.843,3.79));
	printf("10.843f % 3.79f = %f",fmodf(10.843f,3.79f));
	printf("10.843l % 3.79l = %lf",fmodl(10.843l,3.79l));
	return 0;
}