/*2352467 ��08 �԰�ǿ*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
	printf("�����������ε����߼���нǣ��Ƕȣ�\n");
	int a = 0;
	int b = 0;
	int c = 0;
	const double pi = 3.14159;
	scanf("%d %d %d", &a, &b, &c);
	double s = 0;
	s = a * b * sin(c*pi/180) / 2;
	printf("���������Ϊ : %.3f", (float)s);
	return 0;
}