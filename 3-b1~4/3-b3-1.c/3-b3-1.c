/*2352467 ��08 �԰�ǿ*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("������[0-100�ڣ�֮�������:\n");
	double num = 0;
	scanf("%lf", &num);
	/*printf("ʮ��λ : %d\n", (int)(num / 1e9) );
	printf("��λ   : %d\n", (int)(num / 1e8  )- (int)(num / 1e9) * 10);
	printf("ǧ��λ : %d\n", (int)(num / 1e7  )- (int)(num / 1e8) * 10);
	printf("����λ : %d\n", (int)(num / 1e6  )- (int)(num / 1e7) * 10);
	printf("ʮ��λ : %d\n", (int)(num / 1e5  )- (int)(num / 1e6) * 10);
	printf("��λ   : %d\n", (int)(num / 1e4  )- (int)(num / 1e5) * 10);
	printf("ǧλ   : %d\n", (int)(num / 1e3  )- (int)(num / 1e4) * 10);
	printf("��λ   : %d\n", (int)(num / 1e2  )- (int)(num / 1e3) * 10);
	printf("ʮλ   : %d\n", (int)(num / 10  )- (int)(num / 1e2) * 10);
	printf("Բ     : %d\n",(int) ((num - (int)(num / 1e5) * 1e5) - (int)((num - (int)(num / 1e5) * 1e5) / 10) * 10));
	printf("��     : %lf\n", num /0.1);
	printf("��     : %lf\n", num / 1000000000 - 0.5 - (int)(num / 1000000000 - 0.5));*/
	int a = 0;
	double c = 1e9;
	num = num + 0.005;
	a = (int)(num / c);
	printf("ʮ��λ : %d\n", a);
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	printf("��λ   : %d\n", a);
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	printf("ǧ��λ : %d\n", a);
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	printf("����λ : %d\n", a);
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);;
	printf("ʮ��λ : %d\n", a);
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	printf("��λ   : %d\n", a);
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	printf("ǧλ   : %d\n", a);
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	printf("��λ   : %d\n", a);
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	printf("ʮλ   : %d\n", a);
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	printf("Բ     : %d\n", a);
	num = num - a * c;
	c /= 10;
	a = (int)(num /c);
	printf("��     : %d\n", a);
	num = num - a * c;
	c /= 10;
	a = (int)(num / c);
	printf("��     : %d\n", a);
	return 0;
}

