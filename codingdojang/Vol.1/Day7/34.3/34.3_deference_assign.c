#include <stdio.h>
int main()
{
	int *numPtr;
	int num = 10;
	
	numPtr = &num;
	*numPtr = 20;
	printf("%p\n",numPtr);
	printf("%p\n",&num);
	printf("%d\n",*numPtr);
	printf("%d\n",num);
	return 0;
	// 		  numPtr											num
	//		   &num											  *numPtr
	// ----------------------							---------------------
	// |					|			0x7ffcd2e96dl4	|					|	
	// |  0x7ffcd2e96dl4	|------------------------->	|		 20			|
	// |					|							|					|
	// ----------------------							---------------------
	
	
	
	
}