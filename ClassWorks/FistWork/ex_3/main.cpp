/*Заполнить двумерный массив случайными числами от -2 до 42. 
Посчитать сумму элементов отдельно в каждой строке и определить 
номер строки, в которой эта сумма максимальна.*/
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int const n = 5;
    int a[n][n];
    int max, i_max, max1;
    srand(time(NULL));
    max = 0;
    for (int i = 0; i < n; i++)
    {
        max1 = 0;
        for (int j = 0; j < n; j++)
        {
            a[i][j] = -2 + rand() % 42;
            max1 = max1 + a[i][j];
            cout << setw(4) << a[i][j];
        }
        if (max < max1)
        {
            max = max1;
            i_max = i;
        }
        cout << endl;
    }
    cout << "Самая большая сумма в строке: " << i_max;
    return 0;
}
