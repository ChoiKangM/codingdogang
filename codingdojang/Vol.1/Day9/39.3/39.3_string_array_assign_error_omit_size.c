#include <stdio.h>
int main()
{
	char stringArray[10] = "Hello";			//배열을 선언시 배열의 크기를 할당한 문자열보다 크게 지정해야 한다.
											//문자열의 마지막엔 NULL이 들어가 선언할 리터럴보다 1 큰 크기로 선언해야함
	char assignThenInitialize[10];
	//assignThenInitialize = "Hello";		// Impossible
											//만약 하고 싶다면 배열의 요소에 문자를 하나하나 집어넣으면 가능하다
	char omitSizeArray[] = "Thank You for your help";	//문자열을 할당할 때 배열의 크기를 생략하는 방법
	printf("stringArray = %s\n",stringArray);
	printf("assignThenInitialize is Impossible\n");
	printf("You can omit size : %s\n",omitSizeArray);
	
	stringArray[0] = 'B';
	printf("Change first index\n");
	printf("stringArray = %s\n",stringArray);
	return 0;
}