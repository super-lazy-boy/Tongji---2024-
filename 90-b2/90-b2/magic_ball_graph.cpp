#include"magic_ball.h"
#include"cmd_console_tools.h"
void graph_choice(int row, int col, int base[][9],int choice)
{

	random_base(row, col, base);
	cout << "��ʼ����Ϊ��" << endl;
	showbase(row, col, base);
	cct_cls();
	int lines = 0, cols = 0;
	lines = 6 + row;
	cols = 40;
	cct_setconsoleborder(cols + 2, lines + 10, cols + 2, lines + 10);
	cct_setfontsize("������", 20, 20);
	//cct_setconsoleborder(cols, lines);
	//cct_setfontsize(4);
	int x = 0, y = 0;
	cout << "��Ļ��" << lines << "��" << cols << "��" << endl;
	print_graph(row, col, choice, &x, &y);
	print_ball(row, col, choice, x, y, base,0);
	if(choice==4)
	cct_gotoxy(x, y + row+1);
	if (choice == 5)
		cct_gotoxy(x, y + 2 * row + 1); 
}
void graph_choice6(int row, int col, int base[][9])
{
	random_base(row, col, base);
	cct_cls();
	int lines = 0, cols = 0;
	lines = 6 + row;
	cols = 40;
	cct_setconsoleborder(cols + 2, lines + 10, cols + 2, lines + 10);
	cct_setfontsize("������", 20, 20);
	int x = 0, y = 0;
	int nothing = 0;//�ж��Ƿ�һ����ʼ�������û��
	nothing = find_can_delete(row, col, base);
	if (nothing == row * col) {
		cct_gotoxy(0, 0);
		cout<< "��Ļ��" << lines << "��" << cols << "�У�δ�ҵ���ʼ�������" << endl;
		print_graph(row, col, 4, &x, &y);
		print_ball(row, col, 4, x, y, base,0);
	}
	else {
		cout << "��Ļ��" << lines << "��" << cols << "��" << endl;
		print_graph(row, col, 4, &x, &y);
		print_ball(row, col, 4, x, y, base,0);
	}
	cct_gotoxy(x, y + row + 1);
}
void graph_choice7(int row, int col, int base[][9])
{
	cct_setcolor();
	random_base(row, col, base);
	cct_cls();
	int lines = 0, cols = 0;
	lines = 6 + row;
	cols = 40;
	cct_setconsoleborder(cols+2, lines+10, cols+2, lines+10);
	cct_setfontsize("������", 20, 20);
	int x = 0, y = 0;
	int count = 0;//�ڱ�����ʱ�ò����������
	int nothing = 0;//�ж��Ƿ�һ����ʼ�������û��
	cct_gotoxy(0, 0);
	cout << "��Ļ��" << lines << "��" << cols << "��" << endl;
	print_graph(row, col, 5, &x, &y);
	print_ball(row, col, 5, x, y, base, 0);
	while (1) {
		nothing = find_can_delete(row, col, base);
		cct_setcolor();
		if (nothing == row * col) {
			cct_gotoxy(0, 0);
			cout << "��Ļ��" << lines << "��" << cols << "�У�δ�ҵ���ʼ�������" << endl;
			cct_gotoxy(x, y + 2 * row + 1);
			to_be_continued("���س�����ʾ������ʾ...           ");
			find_can_switch(row, col, base);
			print_ball(row, col, 5, x, y, base, 1);
			break;
		}
		else {
			print_ball(row, col, 5, x, y, base,0);
			cct_gotoxy(x, y + 2 * row + 1);
			to_be_continued("���س�����������������������...");
			change_delete(row, col, base, x, y);
			print0_can_delete(row, col, base);//��Ϊ0
			change_drop(row, col, base, x, y);
			cct_gotoxy(x, y + 2 * row + 1);
			to_be_continued("���س���������ֵ���...          ");
			change_input(row, col, base, x, y,&count);
			back_base(row, col, base);
		}
	}
	cct_gotoxy(x, y + 2 * row + 1);
}
//���
void graph_choice89(int row, int col, int base[][9], int choice)
{
	cct_setcolor();
	random_base(row, col, base);
	cct_cls();
	int lines = 0, cols = 0;//��Ļ��С������������
	int count = 0;//���ڼ�������
	lines = 6 + row;
	cols = 40;
	cct_setconsoleborder(cols + 2, lines + 10, cols + 2, lines + 10);
	cct_setfontsize("������", 20, 20);
	int x = 0, y = 0;
	int nothing = 0;//�ж��Ƿ�һ����ʼ�������û��
	cct_gotoxy(0, 0);
	cout << "��Ļ��" << lines << "��" << cols << "�У���ǰ������0 �Ҽ��˳���" << endl;
	print_graph(row, col, 5, &x, &y);
	print_ball(row, col, 5, x, y, base, 0);
	while (1) {
		nothing = find_can_delete(row, col, base);
		cct_setcolor();
		if (nothing == row * col) {
			find_can_switch(row, col, base);
			print_ball(row, col, 5, x, y, base, 1);
			break;
		}
		else {
			print_ball(row, col, 5, x, y, base, 0);
			change_delete(row, col, base, x, y);
			print0_can_delete(row, col, base);//��Ϊ0
			change_drop(row, col, base, x, y);
			change_input(row, col, base, x, y, &count);
			back_base(row, col, base);
		}
	}
	cct_setcolor();
	if (choice == 9) {
		cct_gotoxy(0, 0);
		cout << "��Ļ��" << lines << "��" << cols << "�У���ǰ������" << count << "�Ҽ��˳���" << endl;
		cct_gotoxy(x, y + 2 * row + 1);
	}
	read_mouse(row, col, base, x, y,choice-8,&count,lines,cols);
	cct_gotoxy(x, y + 2 * row + 1);
}