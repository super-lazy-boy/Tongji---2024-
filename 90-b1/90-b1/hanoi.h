/* ��08 2352467 �԰�ǿ */
#pragma once

/* ------------------------------------------------------------------------------------------------------

     ���ļ����ܣ�
	1��Ϊ�˱�֤ hanoi_main.cpp/hanoi_menu.cpp/hanoi_multiple_solutions.cpp ���໥���ʺ����ĺ�������
	2��һ�����ϵ�cpp���õ��ĺ궨�壨#define����ȫ��ֻ����const����������������
	3�����Բο� cmd_console_tools.h ��д���������Ķ�����ᣩ
   ------------------------------------------------------------------------------------------------------ */
#include<iostream>
#include<conio.h>
using namespace std;
int menu();//��ӡ��ʼѡ��˵�
void hanoi(int n, char src, char tmp, char dst, int delay_time, int choice);//ʵ�ֺ�ŵ���ݹ�
void input_choice(int* n, char* src, char* tmp, char* dst, int* delay_time, int choice);//������������ʼĿ����
void print_heng();//�����ӡ�ڲ�����
void print_zong(int x, int y);
void print_choice(int n, char src, char tmp, char dst, int dealy_time, int choice);
void draw_col();
void draw_plate(char src, char dst, int n);
void draw(char src, char tmp, char dst, int n, int delay_time, int choice);
void move_lr(char src, char dst);
void move_ud(char src, char dst, int order);//1��0��
void to_be_continued(const char* prompt, const int X , const int Y );
void game(char src, char tmp, char dst, int n, int delay_time, int choice);

