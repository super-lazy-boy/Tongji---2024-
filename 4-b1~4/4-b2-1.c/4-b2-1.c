/* 2352467 �԰�ǿ ��08 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdbool.h>
int day_max(int y, int m)
{
	bool leap = ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
	int days = 0;
	switch (m)
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
	return days;
}
int zeller(int y, int m, int d)
{
	int c = 0;
	if (m <= 2)
	{
		m += 12;
		y--;
		c = y / 100;
		y = y % 100;
	}
	else {
		c = y / 100;
		y = y % 100;
	}
	int w = 0;
	w = y + y / 4 + c / 4 - 2 * c + 13 * (m + 1) / 5 + d - 1;
	if (w < 0)
		for (; w < 0; w += 7);
	w = w % 7;
	return w;
}

int main()
{
	int w = 0, c = 0, y = 0, m = 0, d = 0, days = 0;
	while (1) {
		printf("��������[1900-2100]���¡��գ�\n" );
		int ret = 0;
		ret = scanf("%d %d %d", &y, &m, &d);
		days = day_max(y, m);
		if (ret!=3)
		{
			scanf("%*[^\n]");
			printf("�����������������\n" );
			continue;
		}
		else {
			if (y < 1900 || y>2100) {
				printf("��ݲ���ȷ������������\n");
				continue;
			}
			if (m < 1 || m>12) {
				printf("�·ݲ���ȷ������������\n");
				continue;
			}
			if (d<1 || d>days) {
				printf("�ղ���ȷ������������\n");
				continue;
			}
		}
		break;
	}
	w = zeller(y, m, d);
	switch (w) {
	case 1:
		printf( "����һ\n" );
		break;
	case 2:
		printf( "���ڶ�\n" );
		break;
	case 3:
		printf( "������\n" );
		break;
	case 4:
		printf( "������\n" );
		break;
	case 5:
		printf( "������\n" );
		break;
	case 6:
		printf( "������\n" );
		break;
	case 0:
		printf( "������\n" );
		break;
	}
	return 0;
}