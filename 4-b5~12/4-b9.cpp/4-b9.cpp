/* 2352467 ��08 �԰�ǿ*/
#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;
static unsigned int sum = 0;
/***************************************************************************
  �������ƣ�
  ��    �ܣ�����fibonacci���еĵ�n���ֵ
  ���������
  �� �� ֵ��
  ˵    �����������κ���ʽ��ѭ������
***************************************************************************/
int fibonacci(int n)
{
	/* ��Ҫ����ɱ����� */
	sum++;
	if (n == 1 || n == 2) {
	
		return 1;
	}
	else {
	
		return fibonacci(n - 1) + fibonacci(n - 2);

	}
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main�����������޸�
***************************************************************************/
int main()
{
	int n, f;
	cout << "������Fibonacci���е�����[1-46]" << endl;
	

	LARGE_INTEGER tick, begin, end;
	QueryPerformanceFrequency(&tick);	//���ʱ��Ƶ��
	QueryPerformanceCounter(&begin);	//��ó�ʼӲ����ʱ������

	cin >> n;
		f = fibonacci(n);
		
		cout << "��" << n << "���";
		cout << "ִ�д���Ϊ��" << sum << endl;
	

	QueryPerformanceCounter(&end);//�����ֹӲ����ʱ������
	cout << "������Ƶ�� : " << tick.QuadPart << "Hz" << endl;
	cout << "���������� : " << end.QuadPart - begin.QuadPart << endl;
	cout << setiosflags(ios::fixed) << setprecision(6) << double(end.QuadPart - begin.QuadPart) / tick.QuadPart << "��" << endl;

	return 0;
}
