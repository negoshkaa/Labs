#include <iostream>
#include <cstdlib>

using namespace std;

void sprtd_num()
{
	int a;
	cout << "Enter a five-digit number:" << endl;
	a = 0;
	while ((a < 10000) || (a > 99999))   //Проверка числа на пятизначность
	{
		cin >> a;
		if ((a < 10000) || (a > 99999))
			cout << "Incorrect number." << endl;
	}
	for (int i = 0; i < 5; i++)          //Вывод каждой цифры числа в новой строке
	{
		cout << a % 10 << endl;
		a = a / 10;
	}
}

//------------------------------------------------

void uppcase()
{
	char a;
	cout << "Enter a lowercase letter:" << endl;  //Ввод буквы нижнего регистра
	cin >> a;
	a = toupper(a);
	cout << "Uppercase letter:" << endl;          //Вывод буквы верхнего регистра
	cout << a << endl;
}

//------------------------------------------------

void avrg()
{
	int a[10]; float avg = 0;
	for (int i = 0; i < 10; i++)                  //Заполнение массива
	{
		a[i] = rand() % 100;
		cout << a[i] << " ";
		avg = avg + a[i];                         //Сложение всех элементов массива
	}
	cout << endl;
	avg = avg / 10;                               //Нахождение среднего
	cout << avg << endl;
}

//------------------------------------------------

int main()
{
	sprtd_num();
	uppcase();
	avrg();
	return 0;
}
