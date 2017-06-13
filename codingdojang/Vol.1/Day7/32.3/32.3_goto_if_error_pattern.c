#include <stdbool.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int gender;		//남자 : 1, 여자 : 2
	int age;		
	bool isOwner;	//자가 : 1, 전월세 : 0
	
	printf("input gender, age, isOwner\n");
	scanf("%d %d %d",&gender,&age,&isOwner);
	
	//자가 주택을 소유한 30대 남자를 찾는다
	printf("안녕하세요\n");
	printf("문을 연다\n");
	/*	//if 문으로 구현 시작
	if(gender == 2)
	{
		printf("안녕히 계세요.\n");
		printf("문을 닫는다.\n");
		return 0;
	}
	if(age < 30)
	{
		printf("안녕히 계세요.\n");
		printf("문을 닫는다.\n");
		return 0;
	}
	if(isOwner == false)
	{
		printf("안녕히 계세요.\n");
		printf("문을 닫는다.\n");
		return 0;
	}
	*/	//if 문으로 구현 종료
	
	if(gender == 2)
		goto EXIT;
	if(age < 30)
		goto EXIT;
	if(isOwner == false)
		goto EXIT;
	
EXIT:
	printf("안녕히 계세요\n");
	printf("문을 닫는다\n");
	//goto를 이용해 중복코드를 줄이고, 코드의 의도도 더 명확하게 합시다
	return 0;
}