#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*************************");
	printf("*************************");
	printf("*****����1����ʼ��Ϸ*****");
	printf("*************************");
	printf("*************************");
	return 0;
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
			printf("��Ǹ�����С�ˡ�");
		else if (guess > key)
			printf("��Ǹ����´��ˡ�");
		else
		{
			printf("��ϲ�㡣�¶��ˣ�");
			break;
		}

	}
	return 0;
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	menu();
	scanf("%d", &input);
	if (input == 1)
	{
		game();
		break;
	}
	else
		printf("��Ǹ����������������롣");
	return 0;
}