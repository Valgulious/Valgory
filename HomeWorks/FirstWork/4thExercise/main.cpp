/*Пользователь вводит с клавиатуры числа. Затем он вводит некоторое
 * проверочное числовое значение. Программа должна найти в массиве все
 * пары чисел таких, что их сумма будет равна проверочному значению.
 * Реализовать аналогичную программу для нахождения всех троек (вместо пар) массива.*/
#include <iostream>

using  namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int n,a, count = 0;

    cout << "Введите кол-во чисел (не меньше 3-х)" << endl;
    cin >> n;
    cout << "Введите проверочное число" << endl;
    cin >> a;
    int *MyArray = new int [n];
    cout << "Введите числа (по-одному, через пробел)" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> MyArray[i];
    }
    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (MyArray[i]+MyArray[j]+MyArray[k] == a)
                    count++;
            }
        }
    }
    cout << "MyArray = ";
    for (int j = 0; j < n; ++j)
    {
        cout << MyArray[j] << " ";
    }
    cout << endl;
    cout << "Число подходящих троек = " << count << endl;
    return 0;
}