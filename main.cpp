

#include <iostream>
#include <cmath> 
const double PI = 3.141592653589793;

using namespace std;

int main()
{
    double alpha;
    //double z1;
    double z2;


    cout << "alpha (in radians) = ";
    cin >> alpha;


    //z1 = cos(alpha) + sin(alpha) + cos(3 * alpha) + sin(3 * alpha);
    z2 = 2 * sqrt(2) * cos(alpha) * sin(PI / 4 + 2 * alpha);


    cout << endl;
    //cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    return 0;
}
