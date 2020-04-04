#include <iostream>
#include <cmath>
using namespace std;

class number
{
private:
    string num;
    int InitialNumSystem, FinalNumSystem;
    int num10;

public:

    number(string num,int InitialNumSystem,int FinalNumSystem);
    int DecimalNotation(); // Перевод в десятичную сислему счисления
    string FiniteNumberSystem(); // Перевод в конечную систему счисления
};
