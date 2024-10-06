/* 2352467 �԰�ǿ ��08 */
#include <iostream>
#include <cstdio>
#include <conio.h>
#include <time.h>
#include <windows.h>
using namespace std;

const int MAX_X = 69;	//����*��ɵı߿�Ŀ��
const int MAX_Y = 17;	//����*��ɵı߿�ĸ߶�

/***************************************************************************
  �������ƣ�
  ��    �ܣ������system("cls")һ���Ĺ��ܣ���Ч�ʸ�
  ���������
  �� �� ֵ��
  ˵    �������������Ļ���������������ǿɼ���������(ʹ�õ�ǰ��ɫ)
***************************************************************************/
void cls(const HANDLE hout)
{
	COORD coord = { 0, 0 };
	CONSOLE_SCREEN_BUFFER_INFO binfo; /* to get buffer info */
	DWORD num;

	/* ȡ��ǰ��������Ϣ */
	GetConsoleScreenBufferInfo(hout, &binfo);
	/* ����ַ� */
	FillConsoleOutputCharacter(hout, (TCHAR)' ', binfo.dwSize.X * binfo.dwSize.Y, coord, &num);
	/* ������� */
	FillConsoleOutputAttribute(hout, binfo.wAttributes, binfo.dwSize.X * binfo.dwSize.Y, coord, &num);

	/* ���ص�(0,0) */
	SetConsoleCursorPosition(hout, coord);
	return;
}

/***************************************************************************
  �������ƣ�gotoxy
  ��    �ܣ�������ƶ���ָ��λ��
  ���������HANDLE hout ������豸���
			int X       ��ָ��λ�õ�x����
			int Y       ��ָ��λ�õ�y����
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void gotoxy(const HANDLE hout, const int X, const int Y)
{
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(hout, coord);
}

/***************************************************************************
  �������ƣ�showch
  ��    �ܣ���ָ��λ�ô���ӡһ��ָ�����ַ�
  ���������HANDLE hout ������豸���
			int X       ��ָ��λ�õ�x����
			int Y       ��ָ��λ�õ�y����
			char ch     ��Ҫ��ӡ���ַ�
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void showch(const HANDLE hout, const int X, const int Y, const char ch)
{
	gotoxy(hout, X, Y);
	putchar(ch);
}

/***************************************************************************
  �������ƣ�init_border
  ��    �ܣ���ʾ��ʼ�ı߿�����ַ�
  ���������HANDLE hout������豸���
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void init_border(const HANDLE hout)
{
	gotoxy(hout, 0, 0);	//����ƻ����Ͻ�(0,0)
	cout << "***********************************************************************" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "***********************************************************************" << endl;

	/* �����ʾ20����д��ĸ����ĸ��ֵ��XY���궼�����ʾ
	   rand()�����Ĺ��ܣ��������һ���� 0-32767 ֮�������
	   ˼������ʲô����£��������ѭ��ִ�����ɺ��㿴����ʵ����ĸ��������20���� */
	int i;
	for (i = 0; i < 20; i++)
		showch(hout, rand() % MAX_X + 1, rand() % MAX_Y + 1, 'A' + rand() % 26);

	return;
}

/* -- �������ӵ����ɺ������Է��ڴ˴� --*/

void move_by_ijkl(const HANDLE hout, int x, int y, bool judge)
{
	int input = 0;
	while (1) {

		input = _getch();
		if (input == 73 || input == 73 + 32)//I
			y--;
		if (input == 74 || input == 74 + 32)//J
			x--;
		if (input == 75 || input == 75 + 32)//K
			y++;
		if (input == 76 || input == 76 + 32)//L
			x++;
		if (input == 81 || input == 81 + 32) {
			gotoxy(hout, 0, MAX_Y + 2);
			int i;
			for (i = 0; i < 4; i++)
				cout << endl;
			cout << "��Ϸ���������س������ز˵�.";
			break;
		}
		if (judge == 1 && x == MAX_X + 1)
			x = 1;
		else if (judge == 1 && x == 0)
			x = MAX_X - 1;
		if (judge == 1 && y == MAX_Y + 1)
			y = 1;
		else if (judge == 1 && y == 0)
			y = MAX_Y - 1;
		//�߽����
		if (judge == 0 && x == MAX_X + 1)
			x--;
		else if (judge == 0 && x == 0)
			x++;
		if (judge == 0 && y == MAX_Y + 1)
			y--;
		else if (judge == 0 && y == 0)
			y++;
		//�߽�ֹͣ
		if (input == 32)
			putchar(' ');
		gotoxy(hout, x, y);
	}
	while (1) {
		input = _getch();
		if (input == 13) {
			cls(hout);
			break;
		}
	}
}

int menu()
{
	cout << "1.��I��J��K��L��������������(��Сд���ɣ��߽�ֹͣ)" << endl;
	cout << "2.��I��J��K��L��������������(��Сд���ɣ��߽����)" << endl;
	cout << "3.�ü�ͷ�������������ң��߽�ֹͣ" << endl;
	cout << "4.�ü�ͷ�������������ң��߽����" << endl;
	cout << "0.�˳�" << endl;
	cout << "[��ѡ��0-6]";
	int num = 0;
	num = _getch();
	return num;
}

void move_by_arrow(const HANDLE hout, int x, int y, bool judge)
{
	int input = 0;
	while (1) {
		input = _getch();
		if (input == 224)
		{
			input = _getch();
			if (input == 75)
				x--;
			if (input == 72)
				y--;
			if (input == 77)
				x++;
			if (input == 80)
				y++;
			if (judge == 1 && x == MAX_X + 1)
				x = 1;
			else if (judge == 1 && x == 0)
				x = MAX_X - 1;
			if (judge == 1 && y == MAX_Y + 1)
				y = 1;
			else if (judge == 1 && y == 0)
				y = MAX_Y - 1;
			//�߽����
			if (judge == 0 && x == MAX_X + 1)
				x--;
			else if (judge == 0 && x == 0)
				x++;
			if (judge == 0 && y == MAX_Y + 1)
				y--;
			else if (judge == 0 && y == 0)
				y++;
			//�߽�ֹͣ
			gotoxy(hout, x, y);
		}
		if (input == 32)
			putchar(' ');
		if (input == 81 || input == 81 + 32) {
			gotoxy(hout, 0, MAX_Y + 2);
			int i;
			for (i = 0; i < 4; i++)
				cout << endl;
			cout << "��Ϸ���������س������ز˵�.";
			break;
		}
	}
	while (1) {
		input = _getch();
		if (input == 13) {
			cls(hout);
			break;
		}
	}
}

int main()
{
	const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
	srand((unsigned int)(time(0)));
	int num = 1;
	while (1) {
		num = menu();
		if (num == 48)
			break;
		cls(hout);
		init_border(hout);
		gotoxy(hout, 34, 8);
		int x = 34, y = 8;
		bool judge = 0;
		switch (num) {
		case 49:
			judge = 0;
			move_by_ijkl(hout, x, y, judge);
			break;
		case 50:
			judge = 1;
			move_by_ijkl(hout, x, y, judge);
			break;
		case 51:
			judge = 0;
			move_by_arrow(hout, x, y, judge);
			break;
		case 52:
			judge = 1;
			move_by_arrow(hout, x, y, judge);
			break;
		}//49-51��1��4��ASCII

	}
	return 0;
}