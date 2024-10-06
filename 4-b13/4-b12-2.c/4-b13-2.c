/* 2352467 �԰�ǿ ��08 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2��������һ��ȫ�ֱ������������徲̬�ֲ�����
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
   ***************************************************************************/
 int count = 0;
void hanoi(int n, char src, char tmp, char dst)
{
    if (n >= 2)
        hanoi(n - 1, src, dst, tmp);
    
    count++;
    printf("%5d:", count);
    printf("%3d# %c-->%c\n", n, src, dst);
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
    int ret = 0;
    char src, tmp, dst;
    while (1) {
        printf( "�����뺺ŵ���Ĳ���(1-16)\n" );
        ret=scanf ("%d", &n);
        if (ret!=1)
        {
            scanf("%*[^\n]");
            getchar();
            continue;
        }
        if (n >= 1 && n <= 16)
        {
            scanf("%*[^\n]");
            getchar();
            break;
        }
    }
    while (1) {
        printf( "��������ʼ��(A-C)\n" );
        ret=scanf("%c",&src);
        scanf("%*[^\n]");
        getchar();
        if (ret!=1 || src < 'A' || (src > 'C' && src < 'a') || src > 'c')
        {
            continue;
        }
        if ((src >= 'A' && src <= 'C') || (src >= 'a' && src <= 'c'))
        {
            if (src >= 'a')
                src = (char)(src - 32);
            break;
        }
    }
    while (1) {
        printf("������Ŀ����(A-C)\n" );
        ret=scanf("%c",&dst);
        scanf("%*[^\n]");
        getchar();
        if (ret!=1 || dst < 'A' || (dst > 'C' && dst < 'a') || dst > 'c')
        {
            continue;
        }
        if ((dst >= 'A' && dst <= 'C') || (dst >= 'a' && dst <= 'c'))
        {
            if (dst >= 'a')
                dst = (char)(dst - 32);
            if (dst == src) {
                if (dst == 'A')
                    printf( "Ŀ����(A)��������ʼ��(A)��ͬ\n" );
                if (dst == 'B')
                    printf("Ŀ����(B)��������ʼ��(B)��ͬ\n");
                if (dst == 'C')
                    printf("Ŀ����(C)��������ʼ��(C)��ͬ\n");
                continue;
            }
            break;
        }
    }
    tmp = (char)(65 + 66 + 67 - src - dst);
    printf("�ƶ�����Ϊ:\n" );
    hanoi(n, src, tmp, dst);
    return 0;
}
