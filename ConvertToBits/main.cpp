/*Написать программу, которая переводила бы десятичное число в двоичное и наоборот.*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int a, b = 0,n = 0;
    string s;
    cout << "Введите  десятичное число" << endl;
    cin >> a;
    while (a/2 != 0)
    {
        s = to_string(a%2) + s;
        a = a/2;
    }
    s = to_string(a) + s;
    cout << "Это число в двоичной системе сичсления = " << s << endl;
   for (int i = s.length() - 1; i >= 0; i--)
   {
       int c = int(s[i]) - 48;
       b = b + (c*(pow(2,n)));
       n++;
   }
    cout << "Число переведено обратно = " << b;
    return 0;
}
