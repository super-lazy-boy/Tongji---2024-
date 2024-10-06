/* 2352467 ��08 �԰�ǿ */
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

/* -----------------------------------------------------------------------------------
		����   ��1����������һ�����������������ݹ麯�����������������ӵĺ����в������κ���ʽ��ѭ��
				 2��������ų���
				 3������const�ͱ���

		������ ��1������ȫ�ֱ���
				 2����print_tower֮������������в������徲̬�ֲ�����
   ----------------------------------------------------------------------------------- */
void print_row(char start_char,char end_ch,int count)
{
	if (count<(end_ch-'A'+1) ){
		cout << char(start_char);
		count++;
		if (count < (end_ch - 'A' + 1))
			print_row(char(start_char - 1), end_ch, count);
		else
			print_row(char(start_char + 1), end_ch, count);
	}
	else {
		if (count <= (2 * (end_ch - 'A'))) {
			cout  << char(start_char);
			count++;
			print_row(char(start_char + 1), end_ch, count);
		}
	}
}
   /***************************************************************************
	 �������ƣ�
	 ��    �ܣ���ӡ��ĸ��
	 ���������
	 �� �� ֵ��
	 ˵    �����βΰ�������
			   ��ʾ����һ������order��ָ������/����
   ***************************************************************************/
void print_tower(char start_ch,bool order,char end_ch,char maintain)
{
	/* �����趨�����һ����̬�ֲ�������Ҳ���Բ����壩 */
    /* ����ʵ�֣������в������κ���ʽ��ѭ����������������������� */
	if (order)
	{
		if((int)start_ch>(int)end_ch)
		print_tower(char(start_ch - 1), 1,end_ch,maintain);
		if (maintain != start_ch) 
			cout << setw(maintain - start_ch) << setfill(' ') << " ";
		print_row(start_ch, start_ch, 0);
		if (maintain != start_ch)
			cout << setw(maintain - start_ch) << setfill(' ') << " ";
		
			cout << endl;
	}
	else {
		if (maintain != start_ch)
			cout << setw(maintain - start_ch) << setfill(' ') << " ";
		print_row(start_ch, start_ch, 0);
		if (maintain != start_ch)
			cout << setw(maintain - start_ch) << setfill(' ') << " ";
		cout << endl;
		if((int)start_ch>(int)end_ch)
		print_tower(char(start_ch - 1), 0,end_ch,maintain);
	}
}



/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main�����е�...�����޸ģ�����λ�ò�׼�޸�
***************************************************************************/
int main()
{
	char end_ch;

	/* ������������ַ�(����д��Ч��Ϊ����ѭ�����֣��������������) */
	cout << "����������ַ�(A~Z)" << endl;
	end_ch = getchar();			//����������һ���ַ�
	if (end_ch < 'A' || end_ch > 'Z') {
		cout << "�����ַ����Ǵ�д��ĸ" << endl;
		return -1;
	}

	/* ��������ĸ��(�м�ΪA) */
	cout <<setfill('=') << setw(2 * (end_ch - 'A') + 1)<<'=' << endl; /* ����ĸ����������=(��������ѭ��) */
	cout << "��������ĸ��(" << end_ch << "->A)" << endl;
	cout << setfill('=') << setw(2 * (end_ch - 'A') + 1) << '=' << endl; /* ����ĸ����������=(��������ѭ��) */
	print_tower(end_ch,1,'A',end_ch); //�����ӡ A~�����ַ� 
	cout << endl;

	/* ��������ĸ��(�м�ΪA) */
	cout << setfill('=') << setw(2 * (end_ch - 'A') + 1) << '=' << endl; /* ����ĸ����������=(��������ѭ��) */
	cout << "��������ĸ��(" << end_ch << "->A)" << endl;
	cout << setfill('=') << setw(2 * (end_ch - 'A') + 1) << '=' << endl; /* ����ĸ����������=(��������ѭ��) */
	print_tower(end_ch,0,'A',end_ch); //�����ӡ A~�����ַ� 
	cout << endl;

	/* ����������Ư�������Σ��м�ΪA�� */
	cout << setfill('=') << setw(2 * (end_ch - 'A') + 1) << '=' << endl;/* ����ĸ����������= */
	cout << "����(" << end_ch << "->A)" << endl;
	cout << setfill('=') << setw(2 * (end_ch - 'A') + 1) << '=' << endl;/* ����ĸ����������= */
	print_tower(end_ch,1,'A',end_ch);   //��ӡ A~�����ַ��������� 
	print_tower(char(end_ch-1),0,'A',end_ch);   //��ӡ A~�����ַ�-1�ĵ����� 
	cout << endl;

	return 0;
}
