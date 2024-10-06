/* 2352467 �԰�ǿ ��08 */
#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;
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
	int w = 0, c = 0, y = 0, m = 0;
	while (1) {
		cout << "��������[1900-2100]���£�" << endl;
		cin >> y >> m ;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "�����������������" << endl;
			continue;
		}
		else {
			if (y < 1900 || y>2100) {
				cout << "��ݲ���ȷ������������" << endl;
				continue;
			}
			if (m < 1 || m>12) {
				cout << "�·ݲ���ȷ������������" << endl;
				continue;
			}
		}
		break;
	}
	w = zeller(y, m, 1);
	cout << endl;
	cout << y << "��" << m << "��" << endl;
	cout << "======================================================" << endl;
	cout << "������  ����һ  ���ڶ�  ������  ������  ������  ������" << endl;
	cout << "======================================================" << endl;
	int row = 0;
	while (w > 0)
	{
		cout << "        ";
		row += 8;
		w--;
	}
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
	cout<<endl;
	cout << "======================================================" << endl;
	return 0;
}
