#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float P, R, I;
    int T;

    cout << "Enter the amount P: ";
    cin >> P;

    cout << "Enter the loan period T: ";
    cin >> T;

    cout << "Enter the interest rate R: ";
    cin >> R;

    I = (P * T * R) / 100;

    cout << "Simple interest (as float): " << fixed << setprecision(2) << I << endl;
    cout << "Simple interest (as int): " << static_cast<int>(I);

    return 0;
}