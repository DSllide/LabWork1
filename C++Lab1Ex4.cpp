#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input c: ";
    cin >> c;
    int S = 2 * (a * b + a * c + b * c);
    int V = a * b * c;
    cout << "S parallelepiped  = " << S << "\nV parallelepiped = " << V;
}

