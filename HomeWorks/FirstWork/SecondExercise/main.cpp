/*Реализовать приложение, которое бы в процессе каждого очередного
 * ввода числа с клавиатуры добавляло
 * бы его в массив чисел и отображало среднее этого массива в UI.*/
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    bool b = true;
    int a,j,sr = 0, count = 0;
    int const n = 100;
    int MyArray[n];

    while ((count < n) and (b == true))
    {
        cout << "Хотите ввести число? (1 - да, 0 - нет)"<< endl;
        cin >> j;
        if (j == 1)
        {
            cout << "Введите число" << endl;
            cin >> a;
            MyArray[count] = a;
            sr = sr + MyArray[count];
            count++;
            cout << "MyArray = ";
            for (int i = 0; i < count; i++)
            {
                cout << MyArray[i] << " ";
            }
            cout << "Среднее число элементов массива: " << sr/count << endl;
        }
        else
            if (j == 0)
            {
                cout << "Прекращаю работу" << endl;
                cout << "MyArray = ";
                for (int i = 0; i < count; i++)
                {
                    cout << MyArray[i] << " ";
                }
                cout << "Среднее число элементов массива: " << sr/count << endl;
                b = false;
            }
            else
                cout << "Число введено неправильно" << endl;
    }
    return 0;
}