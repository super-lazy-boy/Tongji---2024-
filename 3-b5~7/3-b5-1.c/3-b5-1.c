/*2352467 ��08 �԰�ǿ*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdbool.h>
int main()
{
	printf("�������꣬�£���\n");
	int year, month, day;
	scanf("%d %d %d", &year, &month, &day);
	bool leap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	switch (month) {
	case 1:
		if (day > 31 || day <= 0)
			printf("�������-�����µĹ�ϵ�Ƿ�\n");
		else
			printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day);
		break;
	case 3:
	case 5:
	case 7:
		if (day > 31 || day <= 0)
			printf("�������-�����µĹ�ϵ�Ƿ�\n");
		else {
			if (leap)
				printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, 60 + (month - 3) * 61 / 2 + day);
			else
				printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, 59 + (month - 3) * 61 / 2 + day);
		}
		break;
	case 8:
	case 10:
	case 12:
		if (day > 31 || day <= 0)
			printf("�������-�����µĹ�ϵ�Ƿ�\n");
		else {
			if (leap)
				printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, 213 + (month / 2 - 4) * 61+day);
			else
				printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, 212 + (month / 2 - 4) * 61+day);
		}
		break;
	case 4:
	case 6:
		if (day <= 0 || day > 30)
			printf("�������-�����µĹ�ϵ�Ƿ�\n");
		else {
			if (leap)
				printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, 91 + (month / 2 - 2) * 61 + day);
			else
				printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, 90 + (month / 2 - 2) * 61 + day);
		}
		break;
	case 9:
	case 11:
		if (day <= 0 || day > 30)
			printf("�������-�����µĹ�ϵ�Ƿ�\n");
		else {
			if (leap)
				printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, 244 + (month - 9) * 61 / 2 + day);
			else
				printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, 243 + (month - 9) * 61 / 2 + day);
		}
		break;
	case 2:
		if(leap&&(day<0||day>29))
			printf("�������-�����µĹ�ϵ�Ƿ�\n");
		else if(day>28||day<0)
			printf("�������-�����µĹ�ϵ�Ƿ�\n");
		else
			printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day+31);
		break;
	default:
		printf("�������-�·ݲ���ȷ\n");
		break;
	}
	return 0;
}