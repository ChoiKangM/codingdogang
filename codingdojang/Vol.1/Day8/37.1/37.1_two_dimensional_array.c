#include <stdio.h>
int main()
{
	// int numArr[3(세로)][4(가로)] = 
	// {
	// 	{가로 요소 4개},
	// 	{가로 요소 4개},
	// 	{가로 요소 4개},	//세로 3줄
	// };
	int numArr[3][4] ={
		{ 11, 22, 33, 44 },
		{ 55, 66, 77, 88 },
		{ 99, 110, 121, 132}
	};
	int col = sizeof(numArr[0]) / sizeof(int);			// 4: 2차원 배열의 가로 크기를 구할땐
														// 가로 한 줄의 크기를 요소의 크기로 나눠줌
	int row = sizeof(numArr) / sizeof(numArr[0]);		// 3: 2차원 배열의 세로 크기를 구할 때는
														// 배열이 차지하는 전체 공간을 가로 한 줄의 크기로 나눠줌
	
	for(int i = row -1; i >= 0; i--)						// 세로 크기만큼 반복
	{
		for(int j = col -1; j >=col; j--)						// 가로 크기만큼 반복
		{
			printf("%d ",numArr[i][j]);
		}
		printf("\n");
	}
	return 0;
}