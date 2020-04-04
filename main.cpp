#include <iostream>
#include <cmath>
#include <string>
#include "number.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string num;
    int InitialNumSystem, FinalNumSystem;
    cout << "Число: ";
    cin >> num;
    cout << "Начальная система счисления: ";
    cin >> InitialNumSystem;
    cout << "Конечная система счисления: ";
    cin >> FinalNumSystem;
    number numA(num,InitialNumSystem,FinalNumSystem);
    cout << "Число в " << FinalNumSystem << " системе счисления: " << numA.FiniteNumberSystem();
    return 0;
}
