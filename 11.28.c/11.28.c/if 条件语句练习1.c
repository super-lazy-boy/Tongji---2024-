#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
		printf("����\n");
	else if (age <= 44)
		printf("����\n");
	else  if (age <= 59)
		printf("������\n");
	else if (age <= 89)
		printf("����\n");
	else printf("������\n");

	return 0;
}