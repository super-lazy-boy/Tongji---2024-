#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("*****************************\n");
	printf("******    1  play      ******\n");
	printf("******    0  exit      ******\n");
	printf("*****************************\n");
	printf("*****************************\n");
}
void game()
{
	//���ɨ����Ϸ
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ�����̺���
	InitBoard(mine, ROWS, COLS, '0'); 
	InitBoard(show, ROWS, COLS, '*');
	//�����׵�λ�ã������
	setmine(mine, ROW, COL);
	//��ӡ���̺���
	printboard(show, ROW, COL);
	
    //�Ų��׵ĺ���
	findmine(mine, show, ROW, COL);

}
void test()
{
	int input = 0;
	srand(time(NULL));//��������ɣ���֤�����׵������
	do           
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:

			printf("��Ϸ��ʼ��\n");
			game();                      
			break;
		case 0:
			printf("��Ϸ�˳���\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	
	} while (input);
}
int main()
{
	test();
	return 0;
}