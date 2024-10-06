/* 2352467 �԰�ǿ ��08 */

/* ���������ϵͳ�ĺ궨�塢��Ҫ��ͷ�ļ��� */
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "read_stulist.h"
#include<iomanip>
using namespace std;

#define MAX_FILENAME_LEN		512	//�����ļ�������󳤶�

/* stu_metge ����ÿ��ѧ������Ϣ������ѧ�š�������������Ҫ��˽����Ϣ���������ݲ�׼�����ɼ����������Ҫ��������� */
class stu_merge {
private:
	int  stu_no;				//ѧ��
	char stu_name[MAX_NAME_LEN];  //����

	/* ���������private���ݳ�Ա����Ա�����Լ�������Ҫ������ */
	int a=0;//1Ϊ�����������ڣ�2Ϊֻ�ڵ�һ��������3Ϊֻ�ڵڶ�������
public:
	//���಻�������κεĹ������ݳ�Ա����Ա����
	friend class stu_list;
};

/* stu_list ������ѡ����Ϣ���������ݲ�׼�����ɼ����������Ҫ��������� */
class stu_list {
private:
	student list_round_1[MAX_STU_NUM];	//��һ��ѡ�ε�ѧ�������������򡢲�ȥ�أ�
	int list_num_1;						//��һ��ѡ�ε�ѧ������

	student list_round_2[MAX_STU_NUM];	//�ڶ���ѡ�ε�ѧ�������������򡢲�ȥ�أ�
	int list_num_2;						//�ڶ���ѡ�ε�ѧ������

	stu_merge list_merge[MAX_STU_NUM];	//�ϲ����ѧ��������ȥ�أ����������У�
	int list_merge_num;					//�ϲ����ѧ��������Ŀǰ����ӡ�����������ڲ������������Ҫ��Ҳ��Ҫɾ����

	int sum =0;
	/* ���������private���ݳ�Ա�ͳ�Ա����
	   ע�⣬���������array / set / map / vector��STL���� */

public:
	stu_list();										//���캯����������ɳ�ʼ�����ܣ��������Ҫ�������պ�������
	int read(const char* filename, const int round);	//���ļ��ж���ѡ����Ϣ��roundΪ1/2����ʾѡ���ִ�
	int print(const char* prompt = NULL);				//��ӡ���յ�ѡ������

	/* �������������public��Ա��������ʾ���ϲ���ȥ�ء�����ȣ�
	   �������幫�е����ݳ�Ա
	   �������ڳ�Ա������ʹ��array / set / map / vector��STL���� */
	void change_list();
};

/* --- ������Ը���stu_merge/stu_list������ĳ�Ա����������ʵ�� --- */


/***************************************************************************
  �������ƣ�
  ��    �ܣ����ļ��ж���ѡ����Ϣ��roundΪ1/2����ʾѡ���ִ�
  ���������
  �� �� ֵ��
  ˵    �������캯����������ɳ�ʼ�����ܣ��������Ҫ�������պ�������
***************************************************************************/
stu_list::stu_list()
{
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ���ʾ��̬���ӿ��ʹ�ã��������е��þ�̬���ӿ��е�Ԥ�ú���
  ���������
  �� �� ֵ��
  ˵    ��������������Ҫ�޸� 
***************************************************************************/
int stu_list::read(const char* filename, const int round)
{
	int ret = 0;
	/* ��ȡ��1/2�ֵ�ѡ����������ӡ */
	switch (round) {
		case 1:
			this->list_num_1 = read_stulist(filename, this->list_round_1, MAX_STU_NUM);
			if (this->list_num_1 > 0)
				print_stulist("��һ��ѡ��������", this->list_round_1, this->list_num_1);
			else
				ret = -1;
			break;
		case 2:
			this->list_num_2 = read_stulist(filename, this->list_round_2, MAX_STU_NUM);
			if (this->list_num_2 > 0)
				print_stulist("�ڶ���ѡ��������", this->list_round_2, this->list_num_2);
			else
				ret = -1;
			break;
		default:
			ret = -1;
			break;
	}

	return ret;
}

void stu_list::change_list()
{
	for (int i = 0; i < list_num_1; i++) {
		list_merge[i].stu_no = list_round_1[i].no;
		strcpy(list_merge[i].stu_name , list_round_1[i].name);
		list_merge[i].stu_name[strlen(list_round_1[i].name)] = '\0';
		sum++;
		int count = 0;
		for (int j = 0; j < list_num_2; j++) {
			if (list_round_2[j].no == list_round_1[i].no)
			count++;
		}
		if(count==0)
			list_merge[i].a = 2;
	}
	for (int i = 0; i < list_num_2; i++) {
		int count = 0;
		for (int j = 0; j < list_num_1; j++) {
			if (list_round_2[i].no ==list_round_1[j].no) {
				list_merge[j].a = 1;
				count++;
			}
		}
		if (count)
			continue;
		else {
			list_merge[sum].stu_no = list_round_2[i].no;
			strcpy(list_merge[sum].stu_name, list_round_2[i].name);
			list_merge[sum].stu_name[strlen(list_round_2[i].name)] = '\0';
			list_merge[sum].a = 2;
			sum++;
		}
	}
	for (int i = 0; i < sum; i++) {
		if(i>0&&list_merge[i].stu_no<list_merge[i-1].stu_no)
			for (int j = i ; j > 0; j--) {
				if (list_merge[j].stu_no < list_merge[j - 1].stu_no) {
					stu_merge t;
					t = list_merge[j];
					list_merge[j] = list_merge[j - 1];
					list_merge[j - 1] = t;
				}
			}
	}
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ������ӡ���յ�ѡ������
***************************************************************************/
int stu_list::print(const char* prompt)
{
	cout << prompt << endl;
	cout << "============================================================" << endl;
	cout << "��� ѧ��     ����                            ��һ�� �ڶ���" << endl;
	cout << "============================================================" << endl;
	for (int i = 0; i < sum; i++) {
		cout << setfill(' ') << setiosflags(ios::left) << setw(5) << i + 1 << setw(9) << list_merge[i].stu_no << setw(32) << list_merge[i].stu_name;
		if (list_merge[i].a == 1)
			cout << setw(7) << "Y"  << "Y" << endl;
		else if (list_merge[i].a == 2)
			cout << setw(7) << "/"  << "��ѡ" << endl;
		else if (list_merge[i].a == 3)
			cout << setw(7) << "Y"  << "�˿�" << endl;
	}
	cout << "============================================================" << endl;
	return 0;
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main(int argc, char** argv)
{
	char file1[MAX_FILENAME_LEN], file2[MAX_FILENAME_LEN];

	cout << "������ǰһ��ѡ�ε������ļ� : ";
	gets_s(file1); //cin���ܶ��пո���ļ�

	cout << "�������һ��ѡ�ε������ļ� : ";
	gets_s(file2);

	stu_list list;

	/* �������� */
	if (list.read(file1, 1) < 0)
		return -1;
	if (list.read(file2, 2) < 0)
		return -1;

	/* �������� */
	list.change_list();

	/* ��ӡ */
	list.print("����ѡ������");

	return 0;
}

