#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double x;
    cout << "vvedi a: ";
    cin >> a;
    cout << "vvedi b: ";
    cin >> b;
    cout << "vvedi c: ";
    cin >> c;
    if((b*b - 4*a*c) >= 0) 
    {
        x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "x1=" << x << endl;
        x = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "x2=" << x << endl;
    }
    else
    {
        cout << "net kornei" << endl;
    }

    return 0;
}
