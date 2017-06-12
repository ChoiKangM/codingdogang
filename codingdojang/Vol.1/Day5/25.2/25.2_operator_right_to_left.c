#include <stdio.h>
int main()
{	//보통 연산자는 ->방향이지만 <-방향인 것도 있다. 에를 들면 변수 앞에 붙는++과 = 연산자, 단항 연산자가 <-방향!!
	//면두 쉬에 붙는 ++, -- 는 ->방향!!
	int one = 1;
	int two;
	printf("one = %d\nPerform calculation\n",one);
	two = ++one;		// 앞에 있는 ++를 계산하고 변수를 할당 
	printf("two = %d, one = %d\n",two,one);
	//num5 = num4 = num3 = num2 = num1 = 10 이라면 오른쪽에서 왼쪽으로 차례차례 할당!!
	return 0;
}