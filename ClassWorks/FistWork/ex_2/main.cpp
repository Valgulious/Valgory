/*Заполнить массив из 42-ух элементов нечётными числами от -42 до 42.*/
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    int const n = 42;
    int a[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = -42 + rand() % 42;
        cout << setw(4) << a[i];
    }
    return 0;
}
