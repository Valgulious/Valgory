/*Пользователь вводит дату в формате YYYYMMDD. 
Программа должна отобразить название месяца и дня недели.*/
#include <iostream>

using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    int a,g,m,d, code_year, code_century, code_mounth, day_of_week;
    cout << "Введите дату в формате ГГГГММДД" << endl;
    cin >>  a;
    g = a / 10000;
    a = a % 10000;
    m = a/100;
    d = a % 100;
    switch (g/100)
    {
        case 19:
            code_century = 0;
            break;
        case 20:
            code_century = 6;
            break;
        case 21:
            code_century = 4;
            break;
    }
    code_year = (code_century + (g % 100) + ((g % 100)/4)) % 7;
    switch (m)
    {
        case 1:
            code_mounth = 1;
            cout << "Январь";
            break;
        case 2:
            code_mounth = 4;
            cout << "Февраль ";
            break;
        case 3:
            code_mounth = 4;
            cout << "Март ";
            break;
        case 4:
            code_mounth = 0;
            cout << "Апрель ";
            break;
        case 5:
            code_mounth = 2;
            cout << "Май ";
            break;
        case 6:
            code_mounth = 5;
            cout << "Июнь ";
            break;
        case 7:
            code_mounth = 0;
            cout << "Июль ";
            break;
        case 8:
            code_mounth = 3;
            cout << "Август ";
            break;
        case 9:
            code_mounth = 6;
            cout << "Сентябрь ";
            break;
        case 10:
            code_mounth = 1;
            cout << "Октябрь ";
            break;
        case 11:
            code_mounth = 4;
            cout << "Ноябрь ";
            break;
        case 12:
            code_mounth = 6;
            cout << "Декабрь ";
            break;
    }
    day_of_week = (d + code_mounth + code_year) % 7;
    switch (day_of_week)
    {
        case 0:
            cout << "Суббота";
            break;
        case 1:
            cout << "Воскресенье";
            break;
        case 2:
            cout << "Понедельник";
            break;
        case 3:
            cout << "Вторник";
            break;
        case 4:
            cout << "Среда";
            break;
        case 5:
            cout << "Четверг";
            break;
        case 6:
            cout << "Пятница";
            break;
    }
    return 0;
}
