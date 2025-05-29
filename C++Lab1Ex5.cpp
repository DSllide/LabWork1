#include <iostream>
#include <iomanip>  

using namespace std;

int main()
{
    cout << "Input R: ";
    float R;
    cin >> R;

    float Pi = 3.14;
    float circle_length = 2 * Pi * R;
    float circle_S = Pi * R * R;

    cout << fixed << setprecision(2);
    cout << "Circle area = " << circle_S << "\nCircle length = " << circle_length << endl;

    return 0;
}