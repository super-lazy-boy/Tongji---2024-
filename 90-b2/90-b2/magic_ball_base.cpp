#include"magic_ball.h"
#include"cmd_console_tools.h"
void base_choice(int row, int col, int base[][9],int choice)
{
	int nothing = 0;//�ж��Ƿ�һ����ʼ�������û��
	random_base(row, col, base);
	cout << "��ʼ����Ϊ��" << endl;
	showbase(row, col, base);
	to_be_continued("���س�������Ѱ�ҳ�ʼ��������Ĳ���...");
	while (1) {
		nothing = find_can_delete(row, col, base);
		if (nothing == row * col) {
			cout << "��ʼ���޿�������" << endl;
			break;
		}
		else {
			cout << "��ʼ���������ͬɫ��ʶ����" << endl;
			showbase(row, col, base);
			if (choice == 1)
				break;
			if (choice > 1) {
				to_be_continued("���س���������������������...");
				cout << "�����0������飨��ͬɫ��ʶ����" << endl;
				print0_can_delete(row, col, base);//��Ϊ0
				move_0_up(row, col, base);//�ƶ������ϱ�
				showbase(row, col, base);//��ӡ
				to_be_continued("���س���������ֵ���...");
				cout << "��ֵ��������飨��ͬɫ��ʶ��" << endl;
				print_rand_ch(row, col, base);
				showbase(row, col, base);
			}
		}
	}
	if (choice > 2) {
		cout << "��ѡ���������ʾ����ͬɫ��ʶ��" << endl;
		back_base(row, col, base);
		find_can_switch(row, col, base);
		showbase(row, col, base);
	}
}