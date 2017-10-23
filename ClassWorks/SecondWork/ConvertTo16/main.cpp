/*Написать программу, которая переводила бы 
шестнадцатеричное число в десятичное и наоборот.*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int a,b = 0,n = 0;
    string s;
    cout << "Введите число" << endl;
    cin >> a;
    while (a/16 != 0)
    {
        switch (a%16)
        {
            case 10:
                s = 'A' + s;
                break;
            case 11:
                s = 'B' + s;
                break;
            case 12:
                s = 'C' + s;
                break;
            case 13:
                s = 'D' + s;
                break;
            case 14:
                s = 'E' + s;
                break;
            case 15:
                s = 'D' + s;
                break;
            default:
                s = to_string(a%16) + s;
        }
        a = a/16;
    }
    s = to_string(a) + s;
    cout << "Число в шестнацетиричной системе счисления = " << s << endl;
    for (int i = s.length() - 1; i >= 0;i--)
    {
        int c;
        switch (s[i])
        {
            case 'A':
                c = 10;
                break;
            case 'B':
                c = 11;
                break;
            case 'C':
                c = 12;
                break;
            case 'D':
                c = 13;
                break;
            case 'E':
                c = 14;
                break;
            case 'F':
                c = 15;
                break;
            default:
                c = int(s[i]) - 48;
        }
        b = b + (c*pow(16,n));
        n++;
    }
    cout << "Число переведено обратно = " << b << endl;
    return 0;
}
