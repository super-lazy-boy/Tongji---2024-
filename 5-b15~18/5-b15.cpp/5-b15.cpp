/*2352467 �԰�ǿ ��08*/
#include<iostream>
using namespace std;
int main()
{
	char str[3][128] = { 0 };
	int big = 0, small = 0, num = 0, space = 0, others = 0;
	cout << "�������1��" << endl;
	cin.get(str[0], 128,'\n');
	getchar();
	cout << "�������2��" << endl;
	cin.get(str[1], 128,'\n');
	getchar();
	cout << "�������3��" << endl;
	cin.get(str[2], 128,'\n');
	getchar();
	int i=0,j = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 128&&str[i][j]!='\0'; j++) {
			
			if (str[i][j] >= 'A' && str[i][j] <= 'Z')
				big++;
			else if (str[i][j] >= 'a' && str[i][j] <= 'z')
				small++;
			else if (str[i][j] >= '0' && str[i][j] <= '9')
				num++;
			else if (str[i][j] == ' ')
				space++;
			else
				others++;
		}
	}
	cout << "��д : " << big << endl;
	cout << "Сд : " << small << endl;
	cout << "���� : " << num << endl;
	cout << "�ո� : " << space << endl;
	cout << "���� : " << others << endl;
	return 0;
}