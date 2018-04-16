#include <iostream>
using namespace std;
int main() {
    long double e, a, s = 0.0;
    int b = 1,n = 1;
    cout << "input e: ";
    cin >> e;
    do {
        b *= 2;
        a = (long double)n/((long double)n*(long double)n + b);
        n++;
        if (a > e) s += a;
    } while (a > e);
    cout << "Sum = " << s;
    return 0;
}