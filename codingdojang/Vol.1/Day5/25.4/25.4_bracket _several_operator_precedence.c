#include <stdio.h>
#include <stdbool.h>
int main()
{
	bool boolresult;
	int comparisonresult;
	int one = 1;
	int two = 2;
	int shift_arithmetic_result,shift_arithmetic_result2;
	boolresult = (false || false) && !false || false;		//논리 연산자의 우선순위는 !. &&, || 순
	comparisonresult = 5 == 5 < 10;							//==보다 <의 우선순위가 높음
	shift_arithmetic_result = one << 2 + two << 1;			//<<보다 +의 우선순위가 높음
	shift_arithmetic_result2 = (one << 2) + (two << 1);
	printf("(false || false) && !false || false = %d\n",boolresult); 
	printf("(false || false) = false\n");
	printf("!false = true\n");
	printf("false && true = false\n");
	printf("false || false = false\n\n");
	
	printf("5 == 5 < 10 = %d\n",comparisonresult);		
	printf("5 < 10 = 1\n");
	printf("5 == 1 = 0\n\n");
	
	printf("one << 2 + two << 1 = %d\n",shift_arithmetic_result);
	printf("one << 4 << 1\n");
	printf("2^4 << 1 = 2^5\n\n");
	
	printf("(one << 2) + (two << 1) = %d\n",shift_arithmetic_result2);
	printf("(2^2) + (2^2)=8\n");
	
	return 0;
}