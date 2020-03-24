#include "number.h"

    number::number(string str,int strsys1,int strsys2)
    {
        num = str;
        numsys1 = strsys1;
        numsys2 = strsys2;

    }

    int number::DecimalNotation(int numsys1, string num) // Перевод в десятичную сислему счисления
    {
        int sum = 0;
        int p = num.length() - 1;// степень
        for (int i = 0; i < num.length(); i++)
        {
            int k;

            switch (num[i])
            {
            case 'F':
                k = 15;
                break;
            case 'E':
                k = 14;
                break;
            case 'D':
                k = 13;
                break;
            case 'C':
                k = 12;
                break;
            case 'B':
                k = 11;
                break;
            case 'A':
                k = 10;
                break;
            case '9':
                k = 9;
                break;
            case '8':
                k = 8;
                break;
            case '7':
                k = 7;
                break;
            case '6':
                k = 6;
                break;
            case '5':
                k = 5;
                break;
            case '4':
                k = 4;
                break;
            case '3':
                k = 3;
                break;
            case '2':
                k = 2;
                break;
            case '1':
                k = 1;
                break;
            case '0':
                k = 0;
                break;
            }
            sum = sum + k * pow(numsys1, p);
            p--;
        }
        return sum;
    }

    string number::FiniteNumberSystem(int num10, int numsys2) // Перевод в конечную систему счисления
    {
        string sum;
        sum.clear();
        while (num10 != 0)
        {
            string k;
            switch (num10 % numsys2)
            {
            case 15:
                k = 'F';
                break;
            case 14:
                k = 'E';
                break;
            case 13:
                k = 'D';
                break;
            case 12:
                k = 'C';
                break;
            case 11:
                k = 'B';
                break;
            case 10:
                k = 'A';
                break;
            case 9:
                k = '9';
                break;
            case 8:
                k = '8';
                break;
            case 7:
                k = '7';
                break;
            case 6:
                k = '6';
                break;
            case 5:
                k = '5';
                break;
            case 4:
                k = '4';
                break;
            case 3:
                k = '3';
                break;
            case 2:
                k = '2';
                break;
            case 1:
                k = '1';
                break;
            case 0:
                k = '0';
                break;
            }
            sum = sum + k;
            num10 = num10 / numsys2;
        }
        for (int i = 0, j = sum.length() - 1; i < j; i++, j--)
        {
            int temp = sum[i];
            sum[i] = sum[j];
            sum[j] = temp;
        }
        return sum;
    }
