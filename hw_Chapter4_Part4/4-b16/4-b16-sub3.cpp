/*2352467 �԰�ǿ ��08*/
#include<iostream>
#include<cmath> 
using namespace std;
void two_same_shigen(double a, double b, double c)
{
	double x1 = 0;
	double x2 = 0;
	x1 = x2 = (-b) / (2 * a);
	if (fabs(x1) <= 1e-6)
		x1 = 0;
	if (fabs(x2) <= 1e-6)
		x2 = 0;
	cout << "���������ʵ����" << endl;
	cout << "x1=x2=" << x1 << endl;
}
