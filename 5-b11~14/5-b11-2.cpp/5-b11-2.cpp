/*��07 2352467 �԰�ǿ */
#include <iostream>
#include <string>
//�ɰ���������Ҫ��ͷ�ļ�
using namespace std;

const char chnstr[] = "��Ҽ��������½��ƾ�"; /* ���������д "��" ~ "��" �ĵط���ֻ��������������ȡֵ */
string result;  /* ��result�⣬�����������κ���ʽ��ȫ�ֱ��� */

/* --���������Ҫ�ĺ��� --*/
void input_num(int i, int place)
{
    const char ch[] = "��ʰǪ�Ƿ�";
    switch (i) {
    case 0:
    case 4:
    case 8:
        result = result+ch[0];
        result =result+ ch[1];
        break;
    case 1:
    case 5:
    case 9:
        result = result + ch[2];
        result = result + ch[3];
        break;
    case 3:
    case 7:
        result = result + ch[4];
        result = result + ch[5];
        break;
    case 11:
        result = result + ch[6];
        result = result + ch[7];
        break;
    case 12:
        result = result + ch[8];
        result = result + ch[9];
        break;
    default:
        break;
    }
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main()
{
    /* --���������Ҫ������ --*/
    
    printf("������[0-100��)֮�������:\n");
    double num = 0;
    int ret = 0;
    char ch = 0;
    cin >> num;
    while (1) {
        if (cin.good() && num >= 0 && num < 1e10)
            break;
        cin.clear();
        cin.ignore(2147483647,'\n');
        continue;
    }
    num = num + 0.005;//������������
    int number[14] = { 0 };
    int i = 0;
    double c = 1e10;
    for (i = 1; i < 14; i++) {
        number[i] = (int)(num / c);
        num -= number[i] * c;
        c /= 10;
    }
    const char chs[] = "����Բ��";
    //ǰ��λ
    int he1 = 0, count = 0, he2 = 0;
    int j = 0;
    for (i = 1; i < 4; i++) {
        if (number[i] == 0) {
            for (j = i, he1 = 0; j <= 3; j++)
                he1 += number[j];
            if (number[i - 1] * he1 != 0) {
                result = result + chnstr[2 * number[i]];
                result = result + chnstr[2 * number[i] + 1];
                count += 2;
            }
        }
        else {
            result = result + chnstr[2 * number[i]];
            result = result + chnstr[2 * number[i] + 1];
            count += 2;
            if (i != 3) {
                input_num(i - 1, count);
                count += 2;
            }
        }
    }
    if (number[1] + number[2] + number[3] != 0) {
        result =result+ chs[0];
        result =result+ chs[1];
        count += 2;
    }
    for (i = 4; i < 8; i++) {
        if (number[i] == 0) {
            for (j = 1, he1 = 0; j < i; j++)
                he1 += number[j];
            for (j = i, he2 = 0; j < 8; j++)
                he2 += number[j];
            if (((number[i - 1] * he2 != 0) && i != 4) || (i == 4 && he1 != 0 && he2 != 0)) {
                result = result + chnstr[2 * number[i]];
                result = result + chnstr[2 * number[i] + 1];
                count += 2;
            }
        }
        else {
            result = result + chnstr[2 * number[i]];
            result = result + chnstr[2 * number[i] + 1];
            count += 2;
            if (i != 7) {
                input_num(i - 1, count);
                count += 2;
            }
        }
    }
    if (number[4] + number[5] + number[6] + number[7] != 0) {
        result = result + chs[2];
        result = result + chs[3];
        count += 2;
    }
    for (i = 8; i < 12; i++) {
        if (number[i] == 0) {
            for (j = 1, he1 = 0; j < i; j++)
                he1 += number[j];
            for (j = i, he2 = 0; j < 12; j++)
                he2 += number[j];
            if (((number[i - 1] * he2 != 0) && i != 8) || (i == 8 && he1 != 0 && he2 != 0)) {
                result = result + chnstr[2 * number[i]];
                result = result + chnstr[2 * number[i] + 1];
                count += 2;
            }
        }
        else {
            result = result + chnstr[2 * number[i]];
            result = result + chnstr[2 * number[i] + 1];
            count += 2;
            if (i != 11) {
                input_num(i - 1, count);
                count += 2;
            }
        }
    }
    for (he2 = 0, i = 1; i < 12; i++) {
        he2 += number[i];
    }
    if (he2 != 0) {
        result = result + chs[4];
        result = result + chs[5];
        count += 2;
    }
    if (number[12] != 0) {
        result = result + chnstr[2 * number[12]];
        result = result + chnstr[2 * number[12] + 1];
        count += 2;
        input_num(11, count);
        count += 2;
    }
    else {
        if (number[13] != 0 && he2 != 0) {
            result = result + chnstr[2 * number[12]];
            result = result + chnstr[2 * number[12] + 1];
            count += 2;
        }
    }
    he2 += number[13] + number[12];
    if (he2 == 0) {
        result=result+ chnstr[0];
        result=result+ chnstr[1];
        count += 2;
        result = result + chs[4];
        result = result + chs[5];
        count += 2;

    }
    if (number[13] != 0) {
        result = result + chnstr[2 * number[13]];
        result = result + chnstr[2 * number[13] + 1];
        count += 2;
        input_num(12, count);
        count += 2;
    }
    else {
        result = result + chs[6];
        result = result + chs[7];
        count += 2;
    }
    cout << "��д�����:" << endl;
    cout << result << endl;  /* ת���õ��Ĵ�д�����ֻ�����ñ��������������ط����������κ���ʽ�Դ�д�������ȫ��/������� */
    return 0;
}
