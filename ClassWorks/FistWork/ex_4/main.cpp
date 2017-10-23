/*Найдите произведение цифр трёхзначного числа.*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int n,a,b,c;
    cout << "Введите 3-х значное число" << endl;
    cin >> n;
    a = n/100;
    b = n/10 %10;
    c = n %10;
    cout << "Произведение цифр = " << a*b*c;
    return 0;
}
