#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*************************\n");
	printf("*************************\n");
	printf("*****����1����ʼ��Ϸ*****\n");
	printf("*************************\n");
	printf("*************************\n");

}

void game()
{
	int key = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		printf("������һ������:");
		scanf("%d", &guess);
		if (guess < key)
			printf("��Ǹ�����С�ˡ�\n");
		else if (guess > key)
			printf("��Ǹ����´��ˡ�\n");
		else
		{
			printf("��ϲ�㡣�¶��ˣ�\n");
			break;
		}

	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	menu();
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		game();
		break;
	default:
		printf("��Ǹ����������������롣\n");
		break;
	}
	return 0;
}

