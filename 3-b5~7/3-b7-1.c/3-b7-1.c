/*2352467 ��08 �԰�ǿ*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("����������ֵ��\n");
	double money = 0;
	scanf("%lf", &money);
	int count = 0;
	int fifty = 0;
	int twenty = 0;
	int ten = 0;
	int five = 0;
	int one = 0;
	int wujiao = 0;
	int yijiao = 0;
	int wufen = 0;
	int liangfen = 0;
	int imoney = (int)(money * 100);
	switch (imoney / 5000) {
	case 1:
		count++;
		fifty++;
		imoney -= 5000;
		break;
	case 0:
		break;
	}
	switch (imoney / 2000) {
	case 2:
		count += 2;
		twenty += 2;
		imoney -= 2 * 2000;
		break;
	case 1:
		count++;
		twenty++;
		imoney -= 2000;
		break;
	case 0:
		break;
	}
	switch (imoney / 1000) {
	case 1:
		count++;
		ten++;
		imoney -= 1000;
		break;
	case 0:
		break;
	}
	switch (imoney / 500) {
	case 1:
		count++;
		five++;
		imoney -= 500;
		break;
	case 0:
		break;
	}
	switch (imoney / 100) {
	case 4:
		imoney -= 400;
		one += 4;
		count += 4;
		break;
	case 3:
		imoney -= 300;
		one += 3;
		count += 3;
		break;
	case 2:
		imoney -= 200;
		one += 2;
		count += 2;
		break;
	case 1:
		imoney -= 100;
		one += 1;
		count += 1;
		break;
	case 0:
		break;
	}
	switch (imoney / 50) {
	case 1:
		count++;
		imoney -= 50;
		wujiao++;
		break;
	case 0:
		break;
	}
	switch (imoney / 10) {
	case 4:
		count += 4;
		imoney -= 40;
		yijiao += 4;
		break;
	case 3:
		count += 3;
		imoney -= 30;
		yijiao += 3;
		break;
	case 2:
		count += 2;
		imoney -= 20;
		yijiao += 2;
		break;
	case 1:
		count += 1;
		imoney -= 10;
		yijiao += 1;
		break;
	case 0:
		break;
	}
	switch (imoney / 5) {
	case 1:
		imoney -= 5;
		count++;
		wufen++;
		break;
	case 0:
		break;
	}
	switch (imoney / 2) {
	case 2:
		imoney -= 4;
		count += 2;
		liangfen += 2;
		break;
	case 1:
		imoney -= 2;
		count++;
		liangfen++;
		break;
	case 0:
		break;
	}
	count += imoney;
	printf("��%d�����㣬�������£�\n",count);
	if(fifty!=0)
		printf("50Ԫ : %d��\n", fifty);
	if (twenty != 0)
		printf("20Ԫ : %d��\n", twenty);
	if (ten != 0)
		printf("10Ԫ : %d��\n", ten);
	if (five != 0)
		printf("5Ԫ  : %d��\n", five);
	if (one != 0)
		printf("1Ԫ  : %d��\n", one);
	if (wujiao != 0)
		printf("5��  : %d��\n", wujiao );
	if (yijiao  != 0)
		printf("1��  : %d��\n", yijiao );
	if (wufen  != 0)
		printf("5��  : %d��\n", wufen);
	if (liangfen != 0)
		printf("2��  : %d��\n", liangfen );
	if (imoney  != 0)
		printf("1��  : %d��\n", imoney);
	return 0;
}