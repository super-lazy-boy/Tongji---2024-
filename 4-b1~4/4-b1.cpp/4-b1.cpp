/* 2352467 �԰�ǿ ��08 */
#include <iostream>
using namespace std;

/* �ɸ�����Ҫ�����Ӧ������ */

/***************************************************************************
  �������ƣ�
  ��    �ܣ������д��0~9
  ���������num flag_of_zero
  �� �� ֵ��
  ˵    �������������⣬�������κκ�����������㡱-������!!!!!!
***************************************************************************/
void daxie(int num, int flag_of_zero)
{
	/* ������Ա��������κ��޸� */
	switch (num) {
	case 0:
		if (flag_of_zero)	//�˱��ʲô��˼������˼��
			cout << "��";
		break;
	case 1:
		cout << "Ҽ";
		break;
	case 2:
		cout << "��";
		break;
	case 3:
		cout << "��";
		break;
	case 4:
		cout << "��";
		break;
	case 5:
		cout << "��";
		break;
	case 6:
		cout << "½";
		break;
	case 7:
		cout << "��";
		break;
	case 8:
		cout << "��";
		break;
	case 9:
		cout << "��";
		break;
	default:
		cout << "error";
		break;
	}
}


/* �ɸ�����Ҫ�Զ�����������(Ҳ���Բ�����) */

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main()
{
	/* ������� */
	cout << "������[0-100��)֮�������:" << endl;
	double num;
	cin >> num;
	int a=0, b, d, e, f, g, h, i, j, k, l, m=0;
	double c = 1e9;
	double num1 = 0;//�������ڱȽ�ǰ���Ƿ�����
	num1 = num =num+0.005;
	a = (int)(num / c);
	num = num - a * c;
	c /= 10;
	b = (int)(num / c);
	num = num - b * c;
	c /= 10;
	d = (int)(num / c);
	num = num - d * c;
	c /= 10;
	e = (int)(num / c);
	num = num - e * c;
	c /= 10;
	f = (int)(num / c);
	num = num - f * c;
	c /= 10;
	g = (int)(num / c);
	num = num - g * c;
	c /= 10;
	h = (int)(num / c);
	num = num - h * c;
	c /= 10;
	i = (int)(num / c);
	num = num - i * c;
	c /= 10;
	j = (int)(num / c);
	num = num - j * c;
	c /= 10;
	k = (int)(num / c);
	num = num - k * c;
	c /= 10;
	l = (int)(num / c);
	num = num - l * c;
	c /= 10;
	m = (int)(num / c);
	cout << "��д�����:" << endl;
	daxie(a, 0);
	if (a != 0)
		cout << "ʰ";
	daxie(b, 0);
	if (num1 > 1e8)
		cout << "��";

	daxie(d, (a+b)*e);
	if (d != 0)
		cout << "Ǫ";
	daxie(e, (a+b+d)*f);
	if (e != 0)
		cout << "��";
	daxie(f,(a+b+d+e)*g);
	if (f != 0)
		cout << "ʰ";
	daxie(g, 0);
	if (g+d+f+e>0)
		cout << "��";
		
	daxie(h, (a+b+d+e+f+g)*i);
	if (h != 0)
		cout << "Ǫ";
	daxie(i, (a+b+d+e+f+g+h)*j);
	if (i != 0)
		cout << "��";
	daxie(j, (a+b+d+e+f+g+h+i)*k);
	if (j != 0)
		cout << "ʰ";
	daxie(k, num1-0.005==0);
	if (num1>1||num1-0.005==0)
		cout << "Բ";

	daxie(l, (a+b+d+e+f+g+h+i+j+k)*m);
	if (l != 0)
		cout << "��";
	daxie(m, 0);
	if (m != 0)
		cout << "��";

	if (m == 0 || (m == 0 && l == 0))
		cout << "��";
	cout << endl;
	return 0;
}