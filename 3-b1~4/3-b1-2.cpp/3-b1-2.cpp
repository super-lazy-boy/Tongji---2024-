/*2352467 ��08 �԰�ǿ*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double r, h;
	cout << "������뾶�͸߶�" << endl;
	cin >> r >> h;
	const double pi = 3.14159;
	cout << setiosflags(ios::fixed);
	cout <<setprecision(2) << "Բ�ܳ�     : " << 2 * pi * r << endl;
	cout << setprecision(2) << "Բ���     : " << pi * r * r << endl;
	cout << setprecision(2) << "Բ������ : " << 4 * pi * r * r << endl;
	cout << setprecision(2) << "Բ�����   : " << 4 * pi * r * r * r / 3 << endl;
	cout << setprecision(2) << "Բ�����   : " << pi * r * r * h << endl;

	return 0;
}
