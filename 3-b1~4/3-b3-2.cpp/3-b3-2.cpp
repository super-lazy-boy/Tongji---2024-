/*2352467 ��08 �԰�ǿ*/
#include<iostream>
using namespace std;
int main()
{
	cout << "������[0-100�ڣ�֮�������:\n" ;
	double num = 0;
	cin >> num;
	int a = 0;
	double c = 1e9;
	num = num + 0.005;
	a = (int)(num / c);
	cout << "ʮ��λ : " << a << endl;
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	cout << "��λ   : " << a << endl;
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	cout << "ǧ��λ : " << a << endl;
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	cout << "����λ : " << a << endl;
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	cout << "ʮ��λ : " << a << endl;
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	cout << "��λ   : " << a << endl;
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	cout << "ǧλ   : " << a << endl;
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	cout << "��λ   : " << a << endl;
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	cout << "ʮλ   : " << a << endl;
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	cout << "Բ     : " << a << endl;
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	cout << "��     : " << a << endl;
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	cout << "��     : " << a << endl;
	return 0;
}