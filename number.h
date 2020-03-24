#include <iostream>
using namespace std;

class number
{
private:
    string num;
    int numsys1, numsys2;
    int num10;

public:

    number(string str,int strsys1,int strsys2);
    int DecimalNotation(int numsys1, string num); // Перевод в десятичную сислему счисления
    string FiniteNumberSystem(int num10, int numsys2); // Перевод в конечную систему счисления
};
