/* 2352467 �԰�ǿ ��08 */
#include <iostream>
#include <iomanip>
using namespace std;

/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2����������ȫ�ֱ�����������hanoi�ж���һ����̬�ֲ�����
   3�������������������
   4��main�����������룬����ѭ��
   --------------------------------------------------------------------- */

   /***************************************************************************
     �������ƣ�
     ��    �ܣ���ӡn�㺺ŵ�����ƶ�˳��
     ���������int n������
               char src����ʼ��
               char tmp���м���
               char dst��Ŀ����
     �� �� ֵ��
     ˵    ����1�����������βΡ��������;���׼��
               2������������������κ���ʽ��ѭ��
               3��������һ����̬�ֲ�����
   ***************************************************************************/
void hanoi(int n, char src, char tmp, char dst)
{
    if (n >= 2)
        hanoi(n - 1, src, dst, tmp);
    static int count = 0;
    count++;
    cout << setw(5) << setiosflags(ios::right) << count << ":";
    cout << setw(3) << n << "# " << src << "-->" << dst << endl;
    if (n >= 2)
        hanoi(n - 1, tmp, src, dst);
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����1��������롢���õݹ麯��
            2�������������ʱ������ʹ��ѭ��
            3��Ϊ��ͳһ��飬���������������������������ʼ/Ŀ�����Ĵ��벻Ҫ��ͳһ����������ֱ�ӷ���main�У�
***************************************************************************/
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
            cin.ignore(1410065408, '\n');
            continue;
        }
        if (n >= 1 && n <= 16)
        {
            cin.clear();
            cin.ignore(1410065408, '\n');
            break;
        }
    }
    while (1) {
        cout << "��������ʼ��(A-C)" << endl;
        cin >> src;
        cin.clear();
        cin.ignore(1410065408, '\n');
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
        cin.ignore(1410065408, '\n');
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
    tmp = char(65 + 66 + 67 - src - dst);
    cout << "�ƶ�����Ϊ:" << endl;
    hanoi(n, src, tmp, dst);
    return 0;
}
