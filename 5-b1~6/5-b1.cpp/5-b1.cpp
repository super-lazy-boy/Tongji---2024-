/*2352467 �԰�ǿ ��08*/
#include<iostream>
#include<limits>
using namespace std;
int main()
{
	int str[21];
	int num = 0;
	int i = 0, j = 0;
	cout << "��������������������������20������0������������" << endl;
	for (i = 0; i < 20; i++)
	{
		cin >> str[i];
		if (str[i] <= 0) {
			str[i] = 0;
			if (i == 0)
				cout << "����Ч����" << endl;
			break;
		}
	}
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "ԭ����Ϊ��" << endl;
	for (i = 0; i < 20; i++)
	{
		if (str[i] == 0)
			break;
		cout << str[i]<<" ";
	}
	cout << endl;
	cout << "������Ҫ�����������" << endl;
	cin >> num;
	cout << "����������Ϊ��" << endl;
	str[20] = num;
	int mid = 0;
	for (i = 20; i >= 0; i--)
	{
		if (str[i] < str[i - 1]) {
			mid = str[i];
			str[i] = str[i - 1];
			str[i - 1] = mid;
		}
	}
	for (i = 0; i < 21; i++)
	{
		if (str[i] == 0)
			break;
		cout << str[i]<<" ";
	}
	cout << endl;
	return 0;
}