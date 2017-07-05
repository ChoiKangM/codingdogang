#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int row, col;					//row - 가로, col - 세로
	
	printf("input row and col: ");
	scanf("%d %d",&row, &col);
	
	int ** m = malloc(sizeof(int * ) * row);		//이중 포인터에 (int 포인터 크기 * row)만큼 동적 메모리 할당
													//배열의 세로
	for(int i = 0; i < row; i++)					//세로 크기만큼 반복
	{
		m[i] = malloc(sizeof(int) * col);			//(int의 크기 * col)만큼 동적 메모리 할당
	}												//배열의 가로
	
	for(int i = 0; i < row; i++)					//세로 크기만큼 반복
	{
		for(int j = 0; j < col; j++)				//가로 크기만큼 반복
		{
			m[i][j] = i + j;						//2차원 배열의 각 요소에 i + j 값을 할당
		}
	}
	
	for(int i = 0; i < row; i++)					//세로 크기만큼 반복
	{
		for(int j = 0; j < col; j++)				//가로 크기만큼 반복
		{
			printf("%d ", m[i][j]);					//가로 요소 출력
		}
		printf("\n");								
	}
	for(int i = 0; i < row; i++)					//세로 크기만큼 반복
	{
		free(m[i]);									//가로 공간 메모리 해제
	}
	free(m);										//세로 공간 메모리 해제
	return 0;
}