#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int year = 0;
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("����\n");
	else printf("��������");
	return 0;
}