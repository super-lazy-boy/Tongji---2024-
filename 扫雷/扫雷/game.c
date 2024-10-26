#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include<stdio.h>

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	for (i = 0; i < rows;i++)
	{
		int j = 0;
		for (j = 0;j < cols; j++)
		{
			board[i][j] = set;
		}
	}

}
void printboard(char arr[ROWS][COLS], int row, int col)
{
	printf("-----ɨ�׿�ʼ-----\n");
	int i = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row;i++)
	{
		int j = 0;
		printf("%d ", i);
		for (j = 1; j <= col;j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}

void setmine(char arr[ROWS][COLS], int row, int col)
{
	int count = easycount;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--; 
		}
	}
}
static int get_mine_count(char arr[ROWS][COLS], int x, int y)
{
	int count = 0;
	int i = 0;
		for (i= x - 1;i <=x + 1;i++)
		{
			int j = 0;
			for (j= y - 1; j <=y + 1;j++)
			{
				count += arr[i][j];
			}
		}
	count = count - 9 * '0';
	return count;
}
void findmine(char arr[ROWS][COLS], char arr2[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row+col-easycount)
	{
		printf("��������Ҫ�Ų�����꣺");
		scanf("%d %d", &x, &y);
		//�ж�����ĺ�����
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (arr2[x][y] == '*')
			{
				if (arr[x][y] == '1')
				{
					printf("������˼���㱻ը���ˣ�\n");
					printboard(arr, ROW, COL);
					break;
				}
				else
				{
					int count = get_mine_count(arr, x, y);
					arr2[x][y] = count + '0';
					printboard(arr2, ROW, COL);
					win++;
				}
			}
			else
			{
				printf("�������Ѿ����Ų飬������������\n");
			}
		}
		else
		{
			printf("����Ƿ���\n");
		}
	}
    if (win == row * col - easycount)
    {
	    printf("��ϲ�㣬���׳ɹ�\n");
	    printboard(arr[ROWS][COLS], ROW, COL);
     }  
}
