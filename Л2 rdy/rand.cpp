#include <iostream>

using namespace std;

int main()
{
    int a, b, x;
    cout << "A: ";
    cin >> a;  //Ввод начала интервала
    cout << endl;
    cout << "B: ";
    cin >> b;  //Ввод конца интервала
    cout << endl;
    x = a + rand() % (b - a + 1);  //Случайное число в диапазоне от a до b
    cout << x;
    return 0;
}
