/*2352467 �԰�ǿ ��08*/
#include<iostream>
#include<limits>
using namespace std;
int max(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}
int max(int num1, int num2, int num3)
{
	int mid = 0;//�м���
	mid = num1 > num2 ? num1 : num2;
	return mid > num3 ? mid : num3;
}
int max(int num1, int num2, int num3, int num4)
{
	int mid1 = 0, mid2 = 0;
	mid1= num1 > num2 ? num1 : num2;
	mid2 = mid1 > num3 ? mid1 : num3;
	return mid2 > num4 ? mid2 : num4;
}
int main()
{
	double num=0;
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;

	while (1)
	{
		cout << "���������num��num����������" << endl;
		cin >> num;
		if (num < 2 || num>4) {
			cout << "�����������" << endl;
			break;
		}
		if (cin.fail() || (num != 2 && num != 3 && num != 4)) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		if (num == 2) {
			cin >> num1 >> num2;
			if (cin.fail()) {
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}
			cout << "max=" << max(num1, num2) << endl;
			break;
		}
		else if (num == 3) {
			cin >> num1 >> num2 >> num3;
			if (cin.fail() ){
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}
			cout << "max=" << max(num1, num2, num3) << endl;
			break;
		}
		else if (num == 4) {
			cin >> num1 >> num2 >> num3 >> num4;
			if (cin.fail() ){
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}
			cout << "max=" << max(num1, num2, num3, num4) << endl;
			break;
		}
	}
	return 0;
}