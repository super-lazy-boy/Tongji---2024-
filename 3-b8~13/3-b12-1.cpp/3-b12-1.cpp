/* ��08 2352467 �԰�ǿ */
#include <iostream>
#include<istream>
#include<limits>
using namespace std;

int main()
{
	int x = 0;
	while (1) {
		cout << "������x��ֵ[0-100] : ";
		cin >> x;  //����x�ķ�ʽ������ cin>>int�ͱ�����������������ʽ
		
			if(cin.fail())
			{
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
				continue;
			}
		
		if (x >= 0 && x <= 100)
			break;
		
	}
	 

	cout << "cin.good()=" << cin.good() << " x=" << x << endl; //�˾䲻׼��������Ҫ�����ʱgoodΪ1

	return 0;
}