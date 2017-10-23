/*Реализовать программу, которая определит, 
правильную скобочную последовательность или 
нет ввёл пользователь с клавиатуры.*/
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    string s;
    int count = 0;
    cout << "Введите текст со скобками" << endl;
    cin >> s;
    for (int i = 0; i < s.length();i++)
    {
        if (s[i] == '(')
        {
            count++;
        }
        if (s[i] == ')')
        {
            count--;
        }
    }
    if (count == 0)
    {
        cout << "Последовательность скобок правильная" << endl;
    }
    else
    {
        cout << "Последовательность скобок не правильная" << endl;
    }
    return 0;
}
