/*2352467 �԰�ǿ ��08*/
#include<iostream>
using namespace std;
int main() {
	while (cin.get() != '\n');
	int len = 0, big = 0, small = 0, num = 0, others = 0;
	cin >> len >> big >> small >> num >> others;
	getchar();//������з�
	if (cin.fail()) {
		cin.clear();
		cin.ignore(2147483647, '\n');
		cout << "����Ƿ�" << endl;
		return 0;
	}
	if (len < 12 || len>16) {
		cout << "���볤��[" << len << "]����ȷ" << endl;
		return 0;
	}
	if (big<2 || big>len) {
		cout << "��д��ĸ����[" << big << "]����ȷ" << endl;
		return 0;
	}
	if (small<2 || small>len) {
		cout << "Сд��ĸ����[" << small << "]����ȷ" << endl;
		return 0;
	}
	if (num<2 || num>len) {
		cout << "���ָ���[" << num << "]����ȷ" << endl;
		return 0;
	}
	if (others<2 || others>len) {
		cout << "�������Ÿ���[" << others << "]����ȷ" << endl;
		return 0;
	}
	if (big + small + num + others > len)
	{
		cout << "�����ַ�����֮��[" << big << "+" << small << "+" << num << "+" << others << "]���������볤��[" << len << "]" << endl;
		return 0;
	}
	char key[10][17] = { 0 };
	int i = 0, j = 0;
	for (i = 0; i < 10; i++) {
		cin >> key[i];
	}
	int t = 0;
	for (i = 0; i < 10; i++) {
		int a = len;
		int b = big;
		int c = small;
		int d = num;
		int e = others;
		int leave = len - big - small - num - others;
		for (j = 0; j < len; j++) {
			if (key[i][j] >= 'A' && key[i][j] <= 'Z')
				b--;
			else if (key[i][j] >= 'a' && key[i][j] <= 'z')
				c--;
			else if (key[i][j] >= '0' && key[i][j] <= '9')
				d--;
			else
				for (int k = 0; k < 15; k++) {
					const char other[] = "!@#$%^&*-_=+,.?";
					if (key[i][j] == other[k])
						e--;
				}
		}
		if (b + c + d + e + leave != 0||b>0||c>0||d>0||e>0) {
			cout << "����" << endl;
			t++;
			break;
		}
	}
	if(t==0)
	cout << "��ȷ" << endl;
	return 0;
}