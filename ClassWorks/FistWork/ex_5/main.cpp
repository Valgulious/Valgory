/*Найдите все четырёхзначные числа, 
произведение цифр каждого из которых равна 42.*/
#include <iostream>
#include <iomanip>

using  namespace std;

int main() {
    int a,b,c,d;
    setlocale(LC_ALL, "rus");
    cout << "4-х значные числа, произведение цифр которых = 42: ";
    for (int i = 1000; i < 10000; i++)
    {
        a = i/1000;
        b = i/100 %10;
        c = i/10 %10;
        d = i %10;
        if (a*b*c*d == 42)
        {
            cout << setw(5) << i;
        }
    }
    return 0;
}
