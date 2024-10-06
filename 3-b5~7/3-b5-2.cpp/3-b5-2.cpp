/*2352467 ��08 �԰�ǿ*/
#include<iostream>
using namespace std;
int main()
{
	cout << "�������꣬�£���" << endl;
	int year, month, day;
	cin >> year >> month >> day;
	bool leap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	switch (month) {
	case 1:
		if (day > 31 || day <= 0)
			cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
		else
			cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day << "��" << endl;
		break;
	case 3:
	case 5:
	case 7:
		if (day > 31 || day <= 0)
			cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
		else {
			if (leap)
				cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << 60 + (month - 3) * 61 / 2 + day << "��" << endl;
			else
				cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << 59 + (month - 3) * 61 / 2 + day << "��" << endl;
		}
		break;
	case 8:
	case 10:
	case 12:
		if (day > 31 || day <= 0)
			cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
		else {
			if (leap)
				cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << 213 + (month / 2 - 4) * 61 + day << "��" << endl;
			else
				cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << 212 + (month / 2 - 4) * 61 + day << "��" << endl;
		}
		break;
	case 4:
	case 6:
		if (day <= 0 || day > 30)
			cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
		else {
			if (leap)
				cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << 91 + (month / 2 - 2) * 61 + day << "��" << endl;
			else
				cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << 90 + (month / 2 - 2) * 61 + day << "��" << endl;
		}
		break;
	case 9:
	case 11:
		if (day <= 0 || day > 30)
			cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
		else {
			if (leap)
				cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << 244 + (month - 9) * 61 / 2 + day << "��" << endl;
			else
				cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << 243 + (month - 9) * 61 / 2 + day << "��" << endl;
		}
		break;
	case 2:
		if (leap && (day < 0 || day>29))
			cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
		else if (day > 28 || day < 0)
			cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
		else
			cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day+31 << "��" << endl;
		break;
	default:
		cout << "�������-�·ݲ���ȷ" << endl;
		break;
	}
	return 0;
}