#include <iostream>

using namespace std;

int main()
{
	int a[10];
	cout << "Enter array:" << endl;
	for (int i = 0; i < 10; i++)     //Ввод массива
		cin >> a[i];
	cout << endl;
	cout << "Your array:" << endl;   //Вывод массива
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
	for (int i = 0; i < 10; i++)     //Изменение четного числа на 0
	{
		if ((a[i] % 2) == 0)
			a[i] = 0;
	}
	cout << "Changed array:" << endl;//Вывод массива
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
}
