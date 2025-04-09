#include <iostream>
#include <iomanip>
#include <locale>;
#include "windows.h";
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float P, R, I;  
	int T;
	cout << "Введіть суму P: ";
	cin >> P;
	cout << "Введіть період позики T: ";
	cin >> T;
	cout << "Введіть процентну ставку R: ";
	cin >> R;
	I = (P * T * R) / 100;
	cout << "Прості відсотки (як float): " << fixed << setprecision(2) << I << endl;
	cout << "Прості відсотки (як int): " << static_cast<int>(I);
}