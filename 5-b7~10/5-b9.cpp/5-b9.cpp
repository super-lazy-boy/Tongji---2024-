/*2352467 �԰�ǿ ��08*/
#include <iostream>
#include<limits>
using namespace std;
int judge_hanglie(int shudu[])//�ж��к����Ƿ����Ҫ��
{
	int row[9] = { 0 };
	int i = 0;
	for (i = 0; i < 9; i++) {
		row[shudu[i]-1] += 1;
	}
	int judge = 0;
	for (i = 0; i < 9; i++) {
		if (row[i] != 1)
			judge = 0;
		else
			judge = 1;
	}
	if (judge)
		return 1;
	else
		return 0;
}
int judge_9(int shudu[][9])
{
	int judge = 0;
	int ge[9] = { 0 };
	int i = 0, j = 0, k = 0, n = 0, l = 0;
	for (i = 1; i <= 3; i++) {
		for (l = 1; l <= 3; l++) {
			for (j = 3 * (i - 1); j < 3 * i; j++) {
				for (k = 3 * (l - 1); k < 3 * l; k++) {
					ge[shudu[j][k] - 1] += 1;
				}
			}
			for (n = 0; n < 9; n++) {
				if (ge[i] == 1)
					judge++;
			}
			if (judge != 9)
				break;
		}
	}
	if (judge == 81)
		return 1;
	else
		return 0;
}
int main() {
	cout << "������9*9�ľ���ֵΪ1-9֮��" << endl;
	int shudu[9][9] = { 0 };
	int i = 0, j = 0;
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			while (1) {
				cin >> shudu[i][j];
				if (cin.fail()) {
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					cout << "�����������" << i+1 << "��" << j+1 << "��(���о���1��ʼ����)��ֵ" << endl;
					continue;
				}
				else if (cin.good() && shudu[i][j] < 1 || shudu[i][j]>9) {
					cout << "�����������" << i+1 << "��" << j+1 << "��(���о���1��ʼ����)��ֵ" << endl;
					continue;
				}
				else
					break;
			}
		}
	}
	int shudu_change[9][9];
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			shudu_change[i][j] = shudu[j][i];
		}
	}
	int judge = 0;
	for (i = 0; i < 9; i++) {
		if (judge_hanglie(shudu[i])&&judge_hanglie(shudu_change[i]))
			judge = 1;
		else
			judge = 0;
	}
	if (judge && judge_9(shudu))
		cout << "�������Ľ�" << endl;
	else
		cout << "���������Ľ�" << endl;
	return 0;
	
}