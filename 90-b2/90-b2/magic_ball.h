#pragma once
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<Windows.h>
#include<time.h>
#include<cstring>
using namespace std;

void menu(int* choice);
void to_be_continued(const char* prompt);
int input(int order);
void random_base(int row, int col, int base[][9]);//���������
void showbase(int row, int col, int base[][9]);//��ӡ����
int find_can_delete(int row, int col, int base[][9]);//Ѱ�ҿ�����������
void to_be_end(const char* prompt);//���������
void print0_can_delete(int row, int col, int base[][9]);//����������ת��Ϊ0
void move_0_up(int row, int col, int base[][9]);//��0�ƶ������϶�
void print_rand_ch(int row, int col, int base[][9]);//��0ת��Ϊ���ֵ
void back_base(int row, int col, int base[][9]);//������ת��ΪȫΪ1~9֮�������
void find_can_switch(int row, int col, int base[][9]);//�ҵ����Խ�������������
void print_graph(int row, int col, int choice,int*x,int*y);//��ӡͼ��
void print_ball(int row, int col, int choice, int x, int y, int base[][9],int order);//��ӡС��
void change_delete(int row, int col, int base[][9], int x, int y);//ʵ�ֿ�������Ķ�����������(ֻ�������зָ��ߵ������
void change_drop(int row, int col, int base[][9], int x, int y);//ʵ��С������Ķ�����ʾ
void change_input(int row, int col, int base[][9], int x, int y, int* count);//����λ����
void read_mouse(int row, int col, int base[][9], int x, int y, int order, int* count, int lines, int cols);//ʶ�����

void base_choice(int row, int col, int base[][9], int choice);
void graph_choice(int row, int col, int base[][9],int choice);
void graph_choice6(int row, int col, int base[][9]);
void graph_choice7(int row, int col, int base[][9]);
void graph_choice89(int row, int col, int base[][9], int choice);