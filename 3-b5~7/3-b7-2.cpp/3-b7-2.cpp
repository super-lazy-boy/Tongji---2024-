/*2352467 ��08 �԰�ǿ*/
#include<iostream>
using namespace std;
int main()
{
	cout << "����������ֵ��\n" << endl;
	double money = 0;
	cin >> money;
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
	cout << "��" << count << "�����㣬�������£�" << endl;
	if (fifty != 0)
		cout << "50Ԫ : " << fifty << "��" << endl;
	if (twenty != 0)
		cout << "20Ԫ : " << twenty << "��" << endl;
	if (ten != 0)
		cout << "10Ԫ : " << ten << "��" << endl;
	if (five != 0)
		cout << "5Ԫ  : " << five << "��" << endl;
	if (one != 0)
		cout << "1Ԫ  : " << one << "��" << endl;
	if (wujiao != 0)
		cout << "5��  : " << wujiao  << "��" << endl;
	if (yijiao != 0)
		cout << "1��  : " << yijiao << "��" << endl;
	if (wufen != 0)
		cout << "5��  : " << wufen << "��" << endl;
	if (liangfen != 0)
		cout << "2��  : " << liangfen << "��" << endl;
	if (imoney != 0)
		cout << "1��  : " << imoney << "��" << endl;
	return 0;
}