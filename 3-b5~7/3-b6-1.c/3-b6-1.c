/*2352467 ��08 �԰�ǿ*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("������[0-100��)֮�������:\n");
	double num = 0;
	scanf("%lf", &num);
	int a ,b,d,e,f,g,h,i,j,k,l,m;
	double c = 1e9;
	double num1 = 0;//�������ڱȽ�ǰ���Ƿ�����
	num1=num = num + 0.005;
	int count = 0;
	count=a = (int)(num / c);
	num = num - a * c;
	c /= 10;
	b = (int)(num / c);
	num = num - b * c;
	c /= 10;
	d = (int)(num / c);
	num = num - d * c;
	c /= 10;
	e= (int)(num / c);
	num = num - e* c;
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
	printf("��д�����:\n");
	if (a != 0) {
		switch (a) {
		case 1:
			printf("Ҽ");
			break;
		case 2:
			printf("��");
			break;
		case 3:
			printf("��");
			break;
		case 4:
			printf("��");
			break;
		case 5:
			printf("��");
			break;
		case 6:
			printf("½");
			break;
		case 7:
			printf("��");
			break;
		case 8:
			printf("��");
			break;
		case 9:
			printf("��");
			break;
		case 0:
			printf("��");
			break;
		}
		printf("ʰ");
	}
	if (b != 0) {
		switch (b) {
		case 1:
			printf("Ҽ");
			break;
		case 2:
			printf("��");
			break;
		case 3:
			printf("��");
			break;
		case 4:
			printf("��");
			break;
		case 5:
			printf("��");
			break;
		case 6:
			printf("½");
			break;
		case 7:
			printf("��");
			break;
		case 8:
			printf("��");
			break;
		case 9:
			printf("��");
			break;
		case 0:
			printf("��");
			break;
		}
	}
	if (b != 0 || count != 0) {
		printf("��");
	}

	switch (d) {
	case 1:
		printf("ҼǪ");
		break;
	case 2:
		printf("��Ǫ");
		break;
	case 3:
		printf("��Ǫ");
		break;
	case 4:
		printf("��Ǫ");
		break;
	case 5:
		printf("��Ǫ");
		break;
	case 6:
		printf("½Ǫ");
		break;
	case 7:
		printf("��Ǫ");
		break;
	case 8:
		printf("��Ǫ");
		break;
	case 9:
		printf("��Ǫ");
		break;
	case 0:
		if ( num1>=1e8&&( e != 0 || f != 0 || g != 0))
			printf("��");
		break;
	}
	switch (e) {
	case 1:
		printf("Ҽ��");
		break;
	case 2:
		printf("����");
		break;
	case 3:
		printf("����");
		break;
	case 4:
		printf("����");
		break;
	case 5:
		printf("���");
		break;
	case 6:
		printf("½��");
		break;
	case 7:
		printf("���");
		break;
	case 8:
		printf("�ư�");
		break;
	case 9:
		printf("����");
		break;
	case 0:
		if (d != 0 && (f != 0 || g != 0))
			printf("��");
		break;
	}
    switch (f) {
	case 1:
		printf("Ҽʰ");
		break;
	case 2:
		printf("��ʰ");
		break;
	case 3:
		printf("��ʰ");
		break;
	case 4:
		printf("��ʰ");
		break;
	case 5:
		printf("��ʰ");
		break;
	case 6:
		printf("½ʰ");
		break;
	case 7:
		printf("��ʰ");
		break;
	case 8:
		printf("��ʰ");
		break;
	case 9:
		printf("��ʰ");
		break;
	case 0:
		if (e != 0  && g != 0)
			printf("��");
		break;
	}
    switch (g) {
	case 1:
		printf("Ҽ");
		break;
	case 2:
		printf("��");
		break;
	case 3:
		printf("��");
		break;
	case 4:
		printf("��");
		break;
	case 5:
		printf("��");
		break;
	case 6:
		printf("½");
		break;
	case 7:
		printf("��");
		break;
	case 8:
		printf("��");
		break;
	case 9:
		printf("��");
		break;
	case 0:
		break;
	}
	if (d!=0||e!=0||f!=0||g!=0)
		printf("��");

    switch (h) {
	case 1:
		printf("ҼǪ");
		break;
	case 2:
		printf("��Ǫ");
		break;
	case 3:
		printf("��Ǫ");
		break;
	case 4:
		printf("��Ǫ");
		break;
	case 5:
		printf("��Ǫ");
		break;
	case 6:
		printf("½Ǫ");
		break;
	case 7:
		printf("��Ǫ");
		break;
	case 8:
		printf("��Ǫ");
		break;
	case 9:
		printf("��Ǫ");
		break;
	case 0:
		if ((num1 >= 10000) && (i != 0 || j != 0 || k != 0))
			printf("��");
		break;
	}
	switch (i) {
	case 1:
		printf("Ҽ��");
		break;
	case 2:
		printf("����");
		break;
	case 3:
		printf("����");
		break;
	case 4:
		printf("����");
		break;
	case 5:
		printf("���");
		break;
	case 6:
		printf("½��");
		break;
	case 7:
		printf("���");
		break;
	case 8:
		printf("�ư�");
		break;
	case 9:
		printf("����");
		break;
	case 0:
		if (h != 0 && (j != 0 || k != 0))
			printf("��");
		break;
	}
    switch (j) {
	case 1:
		printf("Ҽʰ");
		break;
	case 2:
		printf("��ʰ");
		break;
	case 3:
		printf("��ʰ");
		break;
	case 4:
		printf("��ʰ");
		break;
	case 5:
		printf("��ʰ");
		break;
	case 6:
		printf("½ʰ");
		break;
	case 7:
		printf("��ʰ");
		break;
	case 8:
		printf("��ʰ");
		break;
	case 9:
		printf("��ʰ");
		break;
	case 0:
		if (i != 0 && k != 0)
			printf("��");
		break;
	}
    switch (k) {
	case 1:
		printf("Ҽ");
		break;
	case 2:
		printf("��");
		break;
	case 3:
		printf("��");
		break;
	case 4:
		printf("��");
		break;
	case 5:
		printf("��");
		break;
	case 6:
		printf("½");
		break;
	case 7:
		printf("��");
		break;
	case 8:
		printf("��");
		break;
	case 9:
		printf("��");
		break;
	case 0:
		break;
	}
	if (num1 >= 1)
		printf("Բ");
	switch (l) {
	case 1:
		printf("Ҽ��");
		break;
	case 2:
		printf("����");
		break;
	case 3:
		printf("����");
		break;
	case 4:
		printf("����");
		break;
	case 5:
		printf("���");
		break;
	case 6:
		printf("½��");
		break;
	case 7:
		printf("���");
		break;
	case 8:
		printf("�ƽ�");
		break;
	case 9:
		printf("����");
		break;
	case 0:
		if (num1 >= 1 && m != 0)
			printf("��");
		break;
	}
    switch (m) {
	case 1:
		printf("Ҽ��");
		break;
	case 2:
		printf("����");
		break;
	case 3:
		printf("����");
		break;
	case 4:
		printf("����");
		break;
	case 5:
		printf("���");
		break;
	case 6:
		printf("½��");
		break;
	case 7:
		printf("���");
		break;
	case 8:
		printf("�Ʒ�");
		break;
	case 9:
		printf("����");
		break;
	case 0:
		break;
	}
	if (num1-0.005 == 0)
		printf("��Բ��");
	else if (m == 0 || (m == 0 && l == 0))
		printf("��");
	else;
	printf("\n");
    return 0;
}