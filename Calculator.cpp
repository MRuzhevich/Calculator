#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251>0"); // кодировка консоли

    char z;
    double a, b;
    cout << "Введите первое число" << endl;
    cin >> a;

    cout << "Введите знак" << endl;
    cin >> z;

    cout << "Введите второе число" << endl;
    cin >> b;

    switch (z) {
    case '+':
        cout << a << '+' << b << '=' << a + b << endl;
        break;
    case '-':
        cout << a << '-' << b << '=' << a - b << endl;
        break;
    case '*':
        cout << a << '*' << b << '=' << a * b << endl;
        break;
    case '/':
        cout << a << '/' << b << '=' << a / b << endl;
        break;
    }



    system("pause>0"); // задержка консольного окна
}