/*2352467 ��08 �԰�ǿ*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("������ɼ������1000������������������\n");
	int score[1000];
	int i = 0;
	for (i = 0; i < 1000; i++)//��ʼ��Ϊ-1
		score[i] = -1;
	for (i = 0; i < 1000; i++)//��������
	{
		scanf("%d", &score[i]);
		if (score[i] < 0)
			break;
	}
printf("���������Ϊ:\n");
int row = 0;
	for (i = 0; i < 1000; i++)//��ӡ
	{
		if (score[i] >= 0) {
			if (row % 10 == 0 && row != 0)
				printf("\n");
			printf("%d ", score[i]);
		}
		else 
			break;
	}
	int mid = 0;
	int j = 0;
	for (i = 0; i <999; i++)//����
	{
		for(j=0;j<=1000-(i+1);j++)
		if (score[j] < score[j + 1]) {
			mid = score[j];
			score[j] = score[j + 1];
			score[j + 1] = mid;
		}
	}
	
	printf("\n");
	printf("�����������Ķ�Ӧ��ϵΪ:\n");
	int count = 1;
	for (i = 0; i < 1000; i++)
	{
		if (score[i] >= 0)
		{
			if (score[i] == score[i - 1]) {
				count++;
			}
			else {
				printf("%d %d\n", score[i], count);
				count = 1;
				continue;
			}
		}
		else
			break;
	}

	return 0;
}