/* 2352467 �԰�ǿ ��08 */
#include <iostream>
#include<cstring>
using namespace std;

#define  N  10	/* �������ת��10������ */

/* �������ٶ�������������ȫ�ֱ��� */

int main()
{
	/* ����в���Ҫ�ı���������ɾ��������������ӻ��滻Ϊ�������͵ı��� */
	char str[256], *p;
	int  a[N] = { 0 }, *pnum, *pa;


	/* ����Ķ��岻׼��(ɾ������Ҫ�ı�������)������Ϊ����ľ���ʵ�֣�Ҫ�󲻵��ٶ����κα����������������� */
	cout << "�����������������������ֵ��ַ���" << endl;
	pa = a;
	pnum = a;
	gets_s(str);
	for (p=str; *p >= 32 && *p <= 126; p++) {
		for (; *p >= '0' && *p <= '9'&&(pa-pnum)<=10; p++) {
			*pa = *pa * 10 + *p-48;
		}
		p--;
		if (*p >= '0' && *p <= '9'&& (pa - pnum) <=10) {
			pa++;
		}
		p++;
	}
	cout << "��" << (pa - pnum) << "������" << endl;
	for (int i = 0; i < (pa - pnum); i++) {
		cout << a[i]<<" ";
	}
	cout << endl;
	return 0;
}