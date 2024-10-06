/* ��08 2352467 �԰�ǿ*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdbool.h>

int main()
{
	int year = 0;
	int month = 0;
	int week = 0;
	int ret = 0;
	while (1) {
		printf("���������(2000-2030)���·�(1-12) : ");
		ret = scanf("%d %d", &year, &month);
		if (ret != 2 )
		{
			scanf("%*[^\n]");
			printf ("����Ƿ�������������\n");
			continue;
		}
		if (month < 1 || month>12 || year < 2000 || year>2030)
		{
			printf("����Ƿ�������������\n");
			continue;
		}
		break;
	}
	while (1)
	{
		printf("������%d��%d��1�յ�����(0-6��ʾ������-������) : ",year,month);
		ret = scanf("%d", &week);
		if (ret != 1 || week < 0 || week>6)
		{
			scanf("%*[^\n]");
			printf("����Ƿ�������������\n");
			continue;
		}
			break;
	}
	printf("\n");
	printf("%d��%d�µ�����Ϊ:\n",year ,month);
	printf("������  ����һ  ���ڶ�  ������  ������  ������  ������\n");
	int row = 0;
	while (week > 0)
	{
		printf("        ");
		row += 8;
		week--;
	}
	bool leap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	int days = 0;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	case 2:
		if (leap) {
			days = 29;
			break;
		}
		else {
			days = 28;
			break;
		}
	}
	int count = 1;
	for (count; count <= days; count++)
	{
		printf("  ");
		printf("%2d", count);
		printf("  ");
		printf("  ");
		row += 8;
		if (row == 56) {
			row -= 56;
			printf("\n");
		}
	}

}