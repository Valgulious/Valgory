/*Написать программу для поиска всех чётных совершенных чисел, 
не превышающих заданного числа.*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL,"rus");
    int a, n = 2;
    cout << "Введите число > 0" << endl;
    cin >> a;
    cout << "Совершенные числа в диапазоне от 0 до " << a << ": ";
    while ((pow(2,n-1)*(pow(2,n)-1)) <= a)
    {
        cout << pow(2,n-1)*(pow(2,n)-1) << " ";
        n++;
    }
    return 0;
}
