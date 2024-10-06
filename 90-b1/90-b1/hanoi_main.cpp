/* ��08 2352467 �԰�ǿ */

/* ----------------------------------------------------------------------------------

     ���ļ����ܣ�
	1����main����
	2����ʼ����Ļ
	3�����ò˵�������hanoi_menu.cpp�У�������ѡ��
	4������ѡ����ò˵������Ӧ��ִ�к�����hanoi_multiple_solutions.cpp�У�

     ���ļ�Ҫ��
	1����������ȫ�ֱ��������ⲿȫ�ֺ;�̬ȫ�֣�const��#define�������Ʒ�Χ�ڣ�
	2����̬�ֲ����������������ƣ���ʹ��׼��Ҳ�ǣ����á����á��ܲ��þ�������
	3���������ϵͳͷ�ļ����Զ���ͷ�ļ��������ռ��

   ----------------------------------------------------------------------------------- */

#include"cmd_console_tools.h"
#include"hanoi.h"
int count = 0;
int main()
{
    /* demo������ִ�д˾䣬��cmd��������Ϊ40��x120�У����������120�У�����9000�У���cmd�����Ҳ���д�ֱ�����ˣ�*/
	cct_setconsoleborder(120, 40, 120, 9000);
	int choice = 0;
	char src = 0, tmp = 0, dst = 0;
	int n = 0;
	int delay_time = 0;
	extern int count;
	extern int col[3][10];
	extern int top[3];
	while (1) {
		choice = menu();
		if (choice == 0)
			break;
		if (choice != 5) {
			input_choice(&n, &src, &tmp, &dst, &delay_time, choice);
		}
		if (choice > 3)
			cct_cls();
		if (choice > 4) {
			draw(src, tmp, dst, n, delay_time, choice);
			cct_setcolor();
		}
		if (choice == 5||choice==6) {
			to_be_continued("���س�������", 0, 30);
		}
		if (choice < 5 || choice == 7 || choice == 8) {
			count = 0;
			hanoi(n, src, tmp, dst, delay_time, choice);
			if (choice == 7 || choice == 8)
				to_be_continued("���س�������", 0, 35);
			else {
				int x = 0, y = 0;
				cct_getxy(x, y);
				to_be_continued("���س�������", 0, y + 1);
			}
		}
		if (choice == 9) {
			count = 0;
			game(src, tmp, dst, n, delay_time, choice);
			int x = 0, y = 0;
			cct_getxy(x, y);
			to_be_continued("���س�������", 0, y+1);
		}
	}
	return 0;
}
