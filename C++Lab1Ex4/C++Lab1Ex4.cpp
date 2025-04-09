#include <iostream>
#include <locale>;
#include "windows.h";
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, c;
    cout << "¬вед≥ть число a: ";
    cin >> a;
    cout << "¬вед≥ть число b: ";
    cin >> b;
    cout << "¬вед≥ть число c: ";
    cin >> c;
    int S = 2 * (a * b + a * c + b * c);
    int V = a * b * c;
    cout << "S паралелеп≥педа за вказаними сторонами = " << S << "\nV паралелеп≥педа за вказаними сторонами = " << V;
}

