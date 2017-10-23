/*Задать матрицу M x N (в файле / в тексте кода приложения / другим способом).
 * Написать программу, которая бы заменяла
 * столбец I и строку J матрицы числами -1, если элемент (I, J) - нулевой.
 * Свести к минимуму расход памяти и время выполнения программы.*/
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    int const N = 5;
    int const  M = 4;
    int a [N][M];
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            a[i][j] = rand()%20;
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (a[i][j] == 0)
            {
                a[i][j] = -1;
                for (int n = 0; n < N; n++)
                {
                    if (a[n][j] != 0)
                        a[n][j] = -1;
                }
                for (int n = 0; n < M; n++)
                {
                    if (a[i][n] != 0)
                        a[i][n] = -1;
                }

            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
    return 0;
}