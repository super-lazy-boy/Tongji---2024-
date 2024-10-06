/* 2352467 �԰�ǿ ��08*/

/* 1���������ͷ�ļ�
   2����������ȫ�ֱ�����������̬ȫ�֣���������const��define
   3����������Ҫ�Ľṹ�塢�����ȣ������ޱ�Դ�����ļ�ʹ�� */
#include<iomanip>
#include<iostream>
#include<conio.h>
using namespace std;
#include"7-b2.h"
#include"cmd_console_tools.h"


/* ������������Դ�����ļ���Ҫ�Ľṹ�壬��Ҫ�ŵ�.h��
       ��Ϊʾ��������Ҫ��ɾ�� */
struct xxx {
    int a = 0;
};

void move(const struct PopMenu* original_para, int* up, int* down, int* light)
{
    char input = 0;
    input = _getch();

    if (input == 72)//�������Ϸ����
        *light -= 1;
    else if (input == 80)//�������·����
        *light += 1;

    if (*light > *down && *down < 9) {
        *down += 1;
        *up += 1;
    }
    else if (*light < *up && *up>0) {
        *up -= 1;
        *down -= 1;
    }
    else if (*up == 0 && *light < *up)
        *light += 1;
    else if (*down == 9 && *light > *down)
        *light -= 1;
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ��������������õĺ���������������ͷ�ļ���
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int pop_menu(const char menu[][MAX_ITEM_LEN], const struct PopMenu* original_para)
{
    cct_setcolor(); //�ָ�ȱʡ��ɫ
    cct_gotoxy((*original_para).start_x, (*original_para).start_y);
    cct_setcolor((*original_para).bg_color, (*original_para).fg_color);
    unsigned int length = strlen((*original_para).title) % 2 == 1 ? strlen((*original_para).title) + 1 : strlen((*original_para).title);
    int width = 0;
    if ((*original_para).width > (int)strlen((*original_para).title))
        width = (*original_para).width % 2 == 1 ? (*original_para).width + 1 : (*original_para).width;
    else
        width = (int)length;
    unsigned int half_length_left = (width - length) / 2 % 2 == 1 ? (width - length) / 2 - 1 : (width - length) / 2;
    unsigned int half_length_right = (width - length) / 2 % 2 == 1 ? (width - length) / 2 + 1 : (width - length) / 2;
    int high = 10 < (*original_para).high ? 10 : (*original_para).high;
    cout << setiosflags(ios::left);
    int up = 0;
    int down = high - 1;//��ʾ�����½���Ŀ��
    int x, y;
    int cols, lines, buffer_cols, buffer_lines;
    cct_getconsoleborder(cols, lines, buffer_cols, buffer_lines);

    cout << "�X";
    for (unsigned int i = 0; i < half_length_left / 2; i++)
        cout << "�T";
    cout << setw(length) << (*original_para).title;
    for (unsigned int i = 0; i < half_length_right / 2; i++)
        cout << "�T";
    cout << "�[" << endl;

    int light = 0;
    do {
        for (int i = up; i < high + up; i++) {
            if (i <= down && i >= up) {
                cct_gotoxy((*original_para).start_x, (*original_para).start_y + 1 + i - up);
                cout << "�U";
                int wid_change = width;
                if (i == light) {
                    cct_setcolor((*original_para).fg_color, (*original_para).bg_color);
                    for (int j = 0; j < wid_change; ) {
                        cct_getxy(x, y);
                        if (j >= (int)strlen(menu[i]) || (j == wid_change - 1 && (unsigned int)menu[i][j] >= '\xA1' && (unsigned int)menu[i][j] <= '\xFE')) {
                            cout << ' ';
                            j++;
                        }
                        else if (x == cols - 1 && ((unsigned int)menu[i][j] >= '\xA1' && (unsigned int)menu[i][j] <= '\xFE')) {
                            cout << " ";
                            wid_change--;
                        }
                        else if (x!=cols-1&&(unsigned int)menu[i][j] >= '\xA1' && (unsigned int)menu[i][j] <= '\xFE') {
                            cout << menu[i][j] << menu[i][j + 1];
                            j += 2;
                        }
                        else {
                            cout << menu[i][j];
                            j++;
                        }
                    }
                    cct_setcolor((*original_para).bg_color, (*original_para).fg_color);
                }
                else{
                    for (int j = 0; j < wid_change; ) {
                        cct_getxy(x, y);
                        if (j >= (int)strlen(menu[i]) || (j == wid_change - 1 && (unsigned int)menu[i][j] >= '\xA1' && (unsigned int)menu[i][j] <= '\xFE')) {
                            cout << ' ';
                            j++;
                        }
                        else if (x == cols - 1 && ((unsigned int)menu[i][j] >= '\xA1' && (unsigned int)menu[i][j] <= '\xFE')) {
                            cout << " ";
                            wid_change--;
                        }
                        else if (x != cols - 1 && (unsigned int)menu[i][j] >= '\xA1' && (unsigned int)menu[i][j] <= '\xFE' ){
                            cout << menu[i][j] << menu[i][j + 1];
                            j += 2;
                        }
                        else {
                            cout << menu[i][j];
                            j++;
                        }
                    }
                }
                cout << "�U";
            }
        }
        cct_gotoxy((*original_para).start_x, (*original_para).start_y + 1 + high);
        cout << "�^";
        for (int i = 0; i < width / 2; i++)
            cout << "�T";
        cout << "�a" << endl;
        int input = _getch();
        if (input== 224)
           move(original_para, &up, &down,&light);
        else if (input == '\r')
            break;
    } while (1);
	return light+1; //���践��
}
