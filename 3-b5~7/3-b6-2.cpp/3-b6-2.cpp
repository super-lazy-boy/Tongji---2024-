/*2352467 ��08 �԰�ǿ*/
#include<iostream>
using namespace std;
int main()
{
	cout << "������[0-100��)֮�������:" << endl;
	double num;
	cin>>num;
	int a, b, d, e, f, g, h, i, j, k, l, m;
	double c = 1e9;
	double num1 = 0;//�������ڱȽ�ǰ���Ƿ�����
	num1 = num = num + 0.005;
	int count = 0;
	count = a = (int)(num / c);
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
	cout<<"��д�����:" << endl;
	if (a != 0) {
		switch (a) {
		case 1:
			cout<<"Ҽ";
			break;
		case 2:
			cout<<"��";
			break;
		case 3:
			cout<<"��";
			break;
		case 4:
			cout<<"��";
			break;
		case 5:
			cout<<"��";
			break;
		case 6:
			cout<<"½";
			break;
		case 7:
			cout<<"��";
			break;
		case 8:
			cout<<"��";
			break;
		case 9:
			cout<<"��";
			break;
		case 0:
			cout<<"��";
			break;
		}
		cout<<"ʰ";
	}
	if (b != 0) {
		switch (b) {
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
		case 0:
			cout << "��";
			break;
		}
	}
	if (b != 0 || count != 0) {
		cout<<"��";
	}

	switch (d) {
	case 1:
		cout<<"ҼǪ";
		break;
	case 2:
		cout<<"��Ǫ";
		break;
	case 3:
		cout<<"��Ǫ";
		break;
	case 4:
		cout<<"��Ǫ";
		break;
	case 5:
		cout<<"��Ǫ";
		break;
	case 6:
		cout<<"½Ǫ";
		break;
	case 7:
		cout<<"��Ǫ";
		break;
	case 8:
		cout<<"��Ǫ";
		break;
	case 9:
		cout<<"��Ǫ";
		break;
	case 0:
		if (num1 >= 1e8 && (e != 0 || f != 0 || g != 0))
			cout<<"��";
		break;
	}
	switch (e) {
	case 1:
		cout<<"Ҽ��";
		break;
	case 2:
		cout<<"����";
		break;
	case 3:
		cout<<"����";
		break;
	case 4:
		cout<<"����";
		break;
	case 5:
		cout<<"���";
		break;
	case 6:
		cout<<"½��";
		break;
	case 7:
		cout<<"���";
		break;
	case 8:
		cout<<"�ư�";
		break;
	case 9:
		cout<<"����";
		break;
	case 0:
		if (d != 0 &&( f != 0 || g != 0))
			cout<<"��";
		break;
	}
	switch (f) {
	case 1:
		cout<<"Ҽʰ";
		break;
	case 2:
		cout<<"��ʰ";
		break;
	case 3:
		cout<<"��ʰ";
		break;
	case 4:
		cout<<"��ʰ";
		break;
	case 5:
		cout<<"��ʰ";
		break;
	case 6:
		cout<<"½ʰ";
		break;
	case 7:
		cout<<"��ʰ";
		break;
	case 8:
		cout<<"��ʰ";
		break;
	case 9:
		cout<<"��ʰ";
		break;
	case 0:
		if (e != 0 && g != 0)
			cout<<"��";
		break;
	}
	switch (g) {
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
	case 0:
		break;
	}
	if (d != 0 || e != 0 || f != 0 || g != 0)
		cout<<"��";

	switch (h) {
	case 1:
		cout << "ҼǪ";
		break;
	case 2:
		cout << "��Ǫ";
		break;
	case 3:
		cout << "��Ǫ";
		break;
	case 4:
		cout << "��Ǫ";
		break;
	case 5:
		cout << "��Ǫ";
		break;
	case 6:
		cout << "½Ǫ";
		break;
	case 7:
		cout << "��Ǫ";
		break;
	case 8:
		cout << "��Ǫ";
		break;
	case 9:
		cout << "��Ǫ";
		break;
	case 0:
		if ((num1 >= 10000) && (i != 0 || j != 0 || k != 0))
			cout<<"��";
		break;
	}
	switch (i) {
	case 1:
		cout << "Ҽ��";
		break;
	case 2:
		cout << "����";
		break;
	case 3:
		cout << "����";
		break;
	case 4:
		cout << "����";
		break;
	case 5:
		cout << "���";
		break;
	case 6:
		cout << "½��";
		break;
	case 7:
		cout << "���";
		break;
	case 8:
		cout << "�ư�";
		break;
	case 9:
		cout << "����";
		break;
	case 0:
		if (h != 0 && (j != 0 || k != 0))
			cout<<"��";
		break;
	}
	switch (j) {
	case 1:
		cout << "Ҽʰ";
		break;
	case 2:
		cout << "��ʰ";
		break;
	case 3:
		cout << "��ʰ";
		break;
	case 4:
		cout << "��ʰ";
		break;
	case 5:
		cout << "��ʰ";
		break;
	case 6:
		cout << "½ʰ";
		break;
	case 7:
		cout << "��ʰ";
		break;
	case 8:
		cout << "��ʰ";
		break;
	case 9:
		cout << "��ʰ";
		break;
	case 0:
		if (i != 0 && k != 0)
			cout<<"��";
		break;
	}
	switch (k) {
	case 1:
		cout<<"Ҽ";
		break;
	case 2:
		cout<<"��";
		break;
	case 3:
		cout<<"��";
		break;
	case 4:
		cout<<"��";
		break;
	case 5:
		cout<<"��";
		break;
	case 6:
		cout<<"½";
		break;
	case 7:
		cout<<"��";
		break;
	case 8:
		cout<<"��";
		break;
	case 9:
		cout<<"��";
		break;
	case 0:
		break;
	}
	if (num1 >= 1)
		cout<<"Բ";
	switch (l) {
	case 1:
		cout<<"Ҽ��";
		break;
	case 2:
		cout<<"����";
		break;
	case 3:
		cout<<"����";
		break;
	case 4:
		cout<<"����";
		break;
	case 5:
		cout<<"���";
		break;
	case 6:
		cout<<"½��";
		break;
	case 7:
		cout<<"���";
		break;
	case 8:
		cout<<"�ƽ�";
		break;
	case 9:
		cout<<"����";
		break;
	case 0:
		if (num1 >= 1 && m != 0)
			cout<<"��";
		break;
	}
	switch (m) {
	case 1:
		cout<<"Ҽ��";
		break;
	case 2:
		cout<<"����";
		break;
	case 3:
		cout<<"����";
		break;
	case 4:
		cout<<"����";
		break;
	case 5:
		cout<<"���";
		break;
	case 6:
		cout<<"½��";
		break;
	case 7:
		cout<<"���";
		break;
	case 8:
		cout<<"�Ʒ�";
		break;
	case 9:
		cout<<"����";
		break;
	case 0:
		if (num1 >= 0.1 && m != 0)
			cout<<"��";
		break;
	}
	if (num1 - 0.005 == 0)
		cout<<"��Բ��";
	else if (m == 0 || (m == 0 && l == 0))
		cout<<"��";
	else;

	cout << endl;
	return 0;
}