/* 2352467 �԰�ǿ ��08 */
#include <iostream>
#include <cmath>
using namespace std;

class triangle;  //�����ǰ������˼��һ�£����������Ŀ����Ϊʲô
class point {
private:
	int x;
	int y;
public:
	/* �������ڴ����һ����Ա����������1����,Ҫ������ʵ�� */
	void set(int px, int py)
	{
		x = px;
		y = py;
	}
	/* ������������Ǹ���Ա�����⣬������������κε����ݳ�Ա�ͳ�Ա�����������Ը�����Ҫ����������� */
	friend int get_x(point &p);
	friend int get_y(point& p);
};

int get_x(point& p)
{
	return p.x;
}
int get_y(point& p)
{
	return p.y;
}

class triangle {
private:
	point p1;
	point p2;
	point p3;
public:
	/* ������Ҫ������Ӧ���������area����(�β�Ϊ�գ���׼��)��Ҫ����������ܹ��������Σ��򷵻���������򷵻� -1 */
	double area()
	{
		double s1 = 0, s2 = 0, s3 = 0;
		s1 = sqrt((get_x(p1) - get_x(p2)) * (get_x(p1) - get_x(p2)) + (get_y(p1) - get_y(p2)) * (get_y(p1) - get_y(p2)));
		s2 = sqrt((get_x(p1) - get_x(p3)) * (get_x(p1) - get_x(p3)) + (get_y(p1) - get_y(p3)) * (get_y(p1) - get_y(p3)));
		s3 = sqrt((get_x(p2) - get_x(p3)) * (get_x(p2) - get_x(p3)) + (get_y(p2) - get_y(p3)) * (get_y(p2) - get_y(p3)));
		double maxs = s1 > s2 ? s1 : s2;
		maxs = maxs > s3 ? maxs : s3;
		double p = (s1 + s2 + s3) / 2;
		if (s1 + s2 + s3 > 2 * maxs)
			return sqrt(p * (p - s1) * (p - s2) * (p - s3));
		else
			return -1;
	}
	/* ���캯�� */
	triangle(int p1_x, int p1_y, int p2_x, int p2_y, int p3_x, int p3_y)
	{
		/* ��p1/p2/p3������ֱ�x,y����ֵ */
		p1.set(p1_x, p1_y);
		p2.set(p2_x, p2_y);
		p3.set(p3_x, p3_y);
	}
	/* ���Զ�����Ҫ�ĳ�Ա�������������ޣ��������ڷ�ʽʵ�֣�������������ݳ�Ա */

};

/* -- �滻����� -- ���в�Ҫ���κθĶ� -- ���в�Ҫɾ�� -- �ڱ��е����治Ҫ�����κ��Լ�����䣬��ҵ�ύ��ӱ��п�ʼ�ᱻ�滻 -- �滻����� -- */

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main������׼��
***************************************************************************/
int main()
{
	if (1) {
		triangle tr(0, 0, 0, 1, 1, 0);  //������Ϊ(0,0) (0,1) (1,0)�������
		cout << "���������Ӧ���ǣ�0.5��ʵ���ǣ�" << tr.area() << endl;
	}

	if (1) {
		triangle tr(0, 2, -1, -1, 1, -1);  //������Ϊ(0,2) (-1,-1) (1,-1)�������
		cout << "���������Ӧ���ǣ�3��  ʵ���ǣ�" << tr.area() << endl;
		}

	if (1) {
		triangle tr(5, 5, -3, 1, 9, -2);  //������Ϊ(5,5) (-3,1) (9,-2)�������
		cout << "���������Ӧ���ǣ�36�� ʵ���ǣ�" << tr.area() << endl;
		}

	if (1) {
		triangle tr(0, 0, 1, 1, 2, 2);  //���㹲��
		cout << "���������Ӧ���ǣ�-1�� ʵ���ǣ�" << tr.area() << endl;
		}

	return 0;
}

