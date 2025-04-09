#include<iostream>;
#include <locale>;
#include "windows.h";
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Enter number a: ";
    int a;
    cin >> a;
    cout << "Enter number b: ";
    int b;
    cin >> b;
    int summary = a + b;
    int difference = a - b;
    int multiple = a * b;
    cout << "Сума чисел a i b = " << summary << "\nРізниця чисел a i b = " << difference << "\nДобуток чисел a i b = " << multiple;
}

