#include <stdio.h>
int main()
{
	int zeroArr[10] = {0,};
	int elevenArr[10];
	int sum=0;
	for(int i = 0; i<10;i++)
		elevenArr[i] = 11*(i+1);
	for(int i=0;i<10;i++)
	{
		printf("zeroArr[%d] = %d\n",i,zeroArr[i]);
		printf("elevenArr[%d] = %d\n",i,elevenArr[i]);
		sum+=elevenArr[i];
	}	
	printf("sizeof(zeroArr) = %lu\n",sizeof(zeroArr));
	printf("sizeof(zeroArr) / sizeof(int) = %lu\n",sizeof(zeroArr) / sizeof(int));
	printf("sizeof(elevenArr) = %lu\n",sizeof(elevenArr));
	printf("sizeof(elevenArr) / sizeof(int) = %lu\n",sizeof(elevenArr) / sizeof(int));
	printf("elevenArr's sum = %d\n",sum);
	
	return 0;
}