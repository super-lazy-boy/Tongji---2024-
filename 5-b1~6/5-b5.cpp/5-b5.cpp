/*2352467 �԰�ǿ ��08*/
#include<iostream>
using namespace std;
int main()
{
	cout << "������ɼ������1000������������������" << endl;
	int score[1000];
	int i = 0;
	for (i = 0; i < 1000; i++)//��ʼ��Ϊ-1
		score[i] = -1;
	for (i = 0; i < 1000; i++)//��������
	{
		cin>>score[i];
		if (score[i] < 0)
			break;
	}
	cout << "���������Ϊ:" << endl;
	int mid = 0;
	int j = 0;
	int row = 0;
	for (i = 0; i < 1000; i++)//��ӡ
	{
		if (score[i] >= 0) {
			row++;
			if (row % 10 == 0 && row != 0)
				cout << endl;
			cout<<score[i]<<" ";
		}
		else
			break;
	}
	for (i = 0; i < 999; i++)//����
	{
		for (j = 0; j <= 1000 - (i + 1); j++)
			if (score[j] < score[j + 1]) {
				mid = score[j];
				score[j] = score[j + 1];
				score[j + 1] = mid;
			}
	}
	
	cout << endl;
	cout << "���������εĶ�Ӧ��ϵΪ:" << endl;
	int count = 0;
	for (i = 0; i < 1000; i++)
	{
		if (score[i] >= 0)
		{
			if (score[i] == score[i - 1]) {
				cout << score[i] << " " << count << endl;
				count++;
			}
			else {
				count++;
				cout << score[i] << " " << count << endl;
				continue;
			}
		}
		else
			break;
	}

	return 0;
}