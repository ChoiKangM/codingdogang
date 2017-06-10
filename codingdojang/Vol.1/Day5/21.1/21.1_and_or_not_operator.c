#include <stdio.h>
int main()
{
	printf("%d\n", 1 && 1);	//1
	printf("%d\n", 1 && 0);	//0
	printf("%d\n", 0 && 1);	//0	//단락 평가(short-circuit evalution) - 첫 번째 값만으로 결과가 확실할 때 두번째 값은 확인 X
	printf("%d\n", 0 && 0);	//0
	printf("%d\n", 2 && 3);	//1
	
	printf("%d\n", 1 || 1);	//1
	printf("%d\n", 1 || 0);	//1	//단락 평가(short-circuit evalution) - 첫 번째 값만으로 결과가 확실할 때 두번째 값은 확인 X
	printf("%d\n", 0 || 1);	//1	
	printf("%d\n", 0 || 0);	//0
	printf("%d\n", 2 || 3);	//1
	
	printf("%d\n", !1);		//0
	printf("%d\n", !0);		//1
	printf("%d\n", !3);		//0
	return 0;
}