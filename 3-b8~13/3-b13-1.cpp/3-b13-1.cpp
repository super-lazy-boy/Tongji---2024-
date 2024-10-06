/* ��08 2352467 �԰�ǿ*/
#include<iostream>
#include<limits>
#include<iomanip>
using namespace std;
int main()
{
	int year = 0;
	int month = 0;
	int week = 0;
	while (1) {
		cout << "���������(2000-2030)���·�(1-12) : ";
		cin >> year >> month ;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "����Ƿ�������������" << endl;
			continue;
		}
		if (month < 1 || month>12 || year < 2000 || year>2030)
		{
			cin.clear();
			cout << "����Ƿ�������������" << endl;
			continue;
		}
		break;
	}
	while (1)
	{
		cout << "������" << year << "��" << month << "��1�յ�����(0-6��ʾ������-������) : ";
		cin >> week;
		if (cin.fail()||week<0||week>6)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "����Ƿ�������������" << endl;
			continue;
		}
		break;
	}
	cout << endl;
	cout << year << "��" << month << "�µ�����Ϊ:" << endl;
	cout << "������  ����һ  ���ڶ�  ������  ������  ������  ������" << endl;
	int row = 0;
	while(week>0)
	{
		cout << "        ";
		row += 8;
		week--;
	}
	bool leap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	int days=0;
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
		cout << "  " << setw(2) << setiosflags(ios::right) << count << "  ";
		cout << "  ";
		row += 8;
		if (row == 56) {
			row -= 56;
			cout << endl;
		}
	}
	
}