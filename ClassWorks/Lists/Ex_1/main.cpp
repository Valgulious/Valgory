/*Объявите указатель на массив типа int и выделите
 * память для 16-ти элементов. Необходимо написать функцию,
 * которая поменяет значения четных и нечетных ячеек массива.
 * (В результате выполнения программы выведите на экран значения массива до и после выполнения функции).*/
#include <iostream>
#include <ctime>

using namespace std;
int *arr = new int[16];
void Invert()
{
    int a;
    for (int i = 0; i < 16; i = i+2)
    {
        a = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = a;
    }
}
int main() {
    srand(time(NULL));
    for (int i = 0; i < 16; i++)
    {
        arr[i] = rand()%100;
        cout << arr[i] << ' ';
    }
    cout << endl;
    Invert();
    for (int i = 0; i < 16; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}