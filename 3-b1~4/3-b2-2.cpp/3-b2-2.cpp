/*2352467 ��08 �԰�ǿ*/
#include<iostream>
using namespace std;
int main()
{
	cout << "������һ��[1..30000]�������:" << endl;
	int num;
	cin >> num;
	cout << "��λ : " << num/10000 << endl;
	cout << "ǧλ : " << num %10000/1000 << endl;
	cout << "��λ : " << num %1000/100 << endl;
	cout << "ʮλ : " << num %100 /10<< endl;
	cout << "��λ : " << num % 10 << endl;
	return 0;
}