#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    string str;
    int strsys1, strsys2;
    cout << "Число: ";
    cin >> str;
    cout << "Начальная система счисления: ";
    cin >> strsys1;
    cout << "Конечная система счисления: ";
    cin >> strsys2;
    number numA(str,strsys1,strsys2);
    int num10 = numA.DecimalNotation(strsys1, str);
    cout << "Число в " << strsys2 << " системе счисления: " << numA.FiniteNumberSystem(num10, strsys2);
    return 0;
}
