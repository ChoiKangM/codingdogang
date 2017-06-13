#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
int main()
{
	int num = 0;
	
	/*	//break문으로 다중 루프 탈출하기 시작
	bool exitOuterLoop = false;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(num==20)
			{
				exitOuterLoop = true;	//바깥쪽 루트를 빠져나가겠다
				break;					//안쪽 루프 끝내기
			}
			num++;
		}
		
		if(exitOuterLoop == true)		//바깥쪽 루프 나갈거면
			break;						//바깥쪽 루프 끝내기
	}
	printf("num = %d\n",num);
	*/	//break 문으로 다중 루프 탈출하기 끝
	
		//goto로 다중 루프 탈출하기 시작
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(num == 20)				//num이 20이면
				goto EXIT;				//레이블 EXIT으로 즉시 이동
			num++;
		}
	}
EXIT:								//레이블 EXIT
	printf("%d\n",num);
	//goto로 다중 루프 탈출하기 끝
	return 0;
}