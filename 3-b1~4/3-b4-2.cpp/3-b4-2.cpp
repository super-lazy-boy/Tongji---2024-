/*2352467 ��08 �԰�ǿ*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	cout << "�����������ε����߼��нǣ��Ƕȣ�" << endl;
	int a = 0;
	int b = 0;
	int c = 0;
	const double pi = 3.14159;
	cin >> a >> b >> c;
	float s = 0;
	s = a * b * sin(c * pi / 180) / 2;
	cout << setiosflags(ios::fixed);
	cout << "���������Ϊ : " <<setprecision(3)<< s << endl;
	return 0;
}