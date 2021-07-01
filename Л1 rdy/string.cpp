#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str; char s; int n = -1;
    cout << "Enter string:" << endl;
    cin >> str;  //Ввод строки
    cout << endl << "Your string:" << endl << str << endl << endl;
    cout << "Enter symbol: ";
    cin >> s;  //Ввод символа
    cout << endl;
    for (int i = 0; i < str.length(); i++)  //Поиск символа в строке
    {
        if (str[i] == s)
        {
            n = i;
            break;
        }
    }
    if (n != -1)
        cout << "Symbol " << s << " is on " << n + 1 << " position" << endl;
    else
        cout << "There is no such symbol in this string" << endl;
    return 0;
}
