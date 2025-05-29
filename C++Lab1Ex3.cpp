#include<iostream>;
#include <locale>;

using namespace std;

int main()
{
    cout << "Enter number a: ";
    int a;
    cin >> a;
    cout << "Enter number b: ";
    int b;
    cin >> b;
    int summary = a + b;
    int difference = a - b;
    int multiple = a * b;
    cout << "Sum a i b = " << summary << "\nDifference a i b = " << difference << "\nProduct a i b = " << multiple;
}