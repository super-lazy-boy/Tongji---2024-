/*2352467 �԰�ǿ ��08*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <conio.h>
#include <windows.h>
#include "5-b7.h"
using namespace std;


int top_a = 0;
int top_b = 0;
int top_c = 0;
int a[10], b[10], c[10];
int delay = 0;
bool show = 0;

void printabc_zong()
{
    cct_gotoxy(10, 11);
    cout << setfill('=') << setw(25) << "=";
    cct_gotoxy(13, 12);
    cout << 'A';
    cct_gotoxy(23, 12);
    cout << 'B';
    cct_gotoxy(33, 12);
    cout << 'C';

    int i = 0;
    int j = 10;
    cout << setfill(' ');
    cct_gotoxy(13, 10);
    for (i = 0, j = 10; i < 10; i++) {
        if (a[i] > 0 && i < top_a)
            cout << setw(2) << setiosflags(ios::right) << a[i];
        else
            cout << "  ";
        j--;
        cct_gotoxy(13, j);
    }
    cct_gotoxy(23, 10);
    for (i = 0, j = 10; i < 10; i++) {
        if (b[i] > 0 && i < top_b)
            cout << setw(2) << setiosflags(ios::right) << b[i];
        else
            cout << "  ";
        j--;
        cct_gotoxy(23, j);
    }
    cct_gotoxy(33,10);
    for (i = 0, j = 10; i < 10; i++) {
        if (c[i] > 0 && i < top_c)
            cout << setw(2) << setiosflags(ios::right) << c[i];
        else
            cout << "  ";
        j--;
        cct_gotoxy(33, j);
    }
}
void printabc_heng()
{
    cout<<"A: ";
    int i = 0;
    for (i = 0; i < 10; i++) {
        if (a[i] > 0 && i < top_a)
            cout << setw(2) << setiosflags(ios::right) << a[i];
        else
            cout << "  ";
    }
    cout << "B: ";
    for (i = 0; i < 10; i++) {
        if (b[i] > 0 && i < top_b)
            cout << setw(2) << setiosflags(ios::right) << b[i];
        else
            cout << "  ";
    }
    cout << "C: ";
    for (i = 0; i < 10; i++) {
        if (c[i] > 0 && i < top_c)
            cout << setw(2) << setiosflags(ios::right) << c[i];
        else
            cout << "  ";
    }
}
void delay_time(int delay)
{
    switch (delay)
    {
    case 0:
        while (1) {
            if (_getch() == 13)
                break;
        }
        break;
    case 1:
        Sleep(1000);
        break;
    case 2:
        Sleep(800);
        break;
    case 3:
        Sleep(600);
        break;
    case 4:
        Sleep(400);
        break;
    case 5:
        Sleep(200);
        break;
    }
}
void hanoi(int n, char src, char tmp, char dst)
{
    if (n >= 2)
        hanoi(n - 1, src, dst, tmp);


    static int count = 0;
    count++;
    cct_gotoxy(16,22);
    cout << "��" <<setfill(' ') << setw(4) << setiosflags(ios::right) << count << " ��(" << setw(2) << n << "#: " << src << "-->" << dst << ")  ";
    int change = 0;
    switch ((int)src)
    {
    case 65:
        change = a[--top_a];
        break;
    case 66:
        change = b[--top_b];
        break;
    case 67:
        change = c[--top_c];
        break;
    }
    switch ((int)dst)
    {
    case 65:
        a[top_a++] = change;
        break;
    case 66:
        b[top_b++] = change;
        break;
    case 67:
        c[top_c++] = change;
        break;
    }
    if (show)
        printabc_heng();
    printabc_zong();
    delay_time(delay);

    if (n >= 2)
        hanoi(n - 1, tmp, src, dst);
}
int main()
{
    int n = 0;
    char src, tmp, dst;
    while (1) {
        cout << "�����뺺ŵ���Ĳ���(1-16)" << endl;
        cin >> n;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(27147483647, '\n');
            continue;
        }
        if (n >= 1 && n <= 16)
        {
            cin.clear();
            cin.ignore(27147483647, '\n');
            break;
        }
    }
    while (1) {
        cout << "��������ʼ��(A-C)" << endl;
        cin >> src;
        cin.clear();
        cin.ignore(27147483647, '\n');
        if (cin.fail() || src < 'A' || (src > 'C' && src < 'a') || src > 'c')
        {
            continue;
        }
        if ((src >= 'A' && src <= 'C') || (src >= 'a' && src <= 'c'))
        {
            if (src >= 'a')
                src = char(src - 32);
            break;
        }
    }
    while (1) {
        cout << "������Ŀ����(A-C)" << endl;
        cin >> dst;
        cin.clear();
        cin.ignore(27147483647, '\n');
        if (cin.fail() || dst < 'A' || (dst > 'C' && dst < 'a') || dst > 'c')
        {
            continue;
        }
        if ((dst >= 'A' && dst <= 'C') || (dst >= 'a' && dst <= 'c'))
        {
            if (dst >= 'a')
                dst = char(dst - 32);
            if (dst == src) {
                if (dst == 'A')
                    cout << "Ŀ����(A)��������ʼ��(A)��ͬ" << endl;
                if (dst == 'B')
                    cout << "Ŀ����(B)��������ʼ��(B)��ͬ" << endl;
                if (dst == 'C')
                    cout << "Ŀ����(C)��������ʼ��(C)��ͬ" << endl;
                continue;
            }
            break;
        }
    }
    while (1) {
        cout << "�������ƶ��ٶ�(0-5: 0-���س�������ʾ 1-��ʱ� 5-��ʱ���)" << endl;
        cin >> delay;
        cin.clear();
        cin.ignore(27147483647, '\n');
        if (delay < 0 || delay>5 || cin.fail())
            continue;
        else
            break;
    }
    while (1) {
        cout << "�������Ƿ���ʾ�ڲ�����ֵ(0-����ʾ 1-��ʾ)" << endl;
        cin >> show;
        cin.clear();
        cin.ignore(27147483647, '\n');
        if (show != 0 && show != 1 || cin.fail())
            continue;
        else
            break;
    }
    int i = 0;
    tmp = (char)(65 + 66 + 67 - src - dst);
    switch ((int)src)
    {
    case 65:
        for (i = 0; i < n; i++) {
            a[i] = n - i;
        }
        top_a = n;
        break;
    case 66:
        for (i = 0; i < n; i++) {
            b[i] = n - i;
        }
        top_b = n;
        break;
    case 67:
        for (i = 0; i < n; i++) {
            c[i] = n - i;
        }
        top_c = n;
        break;
    }//��ʼ����ʼ��
    cct_cls();
    cout << "�� " << src << " �ƶ��� " << dst << "���� " << n << " �㣬��ʱ����Ϊ " << delay << "��";
    if (show)
        cout << "��ʾ�ڲ�����ֵ";
    else
        cout << "����ʾ�ڲ�����ֵ";
    cct_gotoxy(16,22);
    cout << "��ʼ:                ";
    printabc_heng();
    delay_time(delay);
    printabc_zong();
    hanoi(n,src,tmp,dst);
    cct_gotoxy(30, 30);
	system("pause"); //���������ʾ��ͣ��ע�⣺ֻ�ʺ����ض��������ر������ĳ���Ӵ˾���÷�Ϊ0��
	return 0;
}
