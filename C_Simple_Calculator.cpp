#include <iostream>
using namespace std;
int main()
{
    long long int x, y;
    cin >> x >> y;
    long long int summation = x + y;
    long long int multiplication = x * y;
    long long int subtraction = x - y;
    cout << x << " + " << y << " = " << summation << endl;
    cout << x << " * " << y << " = " << multiplication << endl;
    cout << x << " - " << y << " = " << subtraction << endl;
    return 0;
}