/*Написать программу, которая бы выводила на экран 
расписание ваших дисциплин для того дня недели, 
номер которой вводит пользователь.*/
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int s;
    cout << "Введите номер дня недели (понедельник - 1, вторник - 2, среда - 3, четверг - 4, пятница - 5)" << endl;
    cin >> s;
    switch (s)
    {
        case 1:
            cout << "Ко второй паре" << endl;
            cout << "Математический анализ(практика)" << endl;
            cout << "Математический анализ(лекция)" << endl;
            cout << "Английский язык" << endl;
            cout << "Геометрия и топология(лекция)" << endl;
            break;
        case 2:
            cout << "К первой паре" << endl;
            cout << "Геометрия и топология(практика)/нет пары" << endl;
            cout << "Математическая логика(лекция)" << endl;
            cout << "Окно" << endl;
            cout << "Дифференциальные уравнения математической физики" << endl;
            cout << "Физ-ра" << endl;
            break;
        case 3:
            cout << "К первой паре" << endl;
            cout << "Компьютерный практикум" << endl;
            cout << "Компьютерный практикум" << endl;
            cout << "Структуры и алгоритмы компьютерной обработки данных(лекция)" << endl;
            cout << "Структуры и алгоритмы компьютерной обработки данных(практика)" << endl;
            break;
        case 4:
            cout << "К первой паре" << endl;
            cout << "Математическая логика(практика)" << endl;
            cout << "Алгебра(практика)" << endl;
            cout << "Алгебра(лекция)/Архитектура вычислительных и компьютерных сетей(лекция)" << endl;
            cout << "Нет пары/Архитектура вычислительных и компьютерных сетей(практика)" << endl;
            break;
        case 5:
            cout << "К третьей паре" << endl;
            cout << "Дискретная математика(лекция)" << endl;
            cout << "Дискретная математика(практика)" << endl;
            cout << "Физ-ра" << endl;
            break;
        case 6:
            cout << "Выходной" << endl;
            break;
        case 7:
            cout << "Выходной" << endl;
            break;
        default: cout << "Число введено неправильно" << endl;
    }
    return 0;
}
