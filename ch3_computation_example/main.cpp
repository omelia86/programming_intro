#include <iostream>
#include <cmath>
using namespace std;

int main ()

{
    cout << "Please, enter a floating-point number: ";
    double n;
    cin >> n;
    cout << " n == " << n
         << "\n n+1 == " << n+1
         << "\n three times n == " << 3*n
         << "\n two times n == " << n+n
         << "\n n^2 ==" << n*n
         << "\n 0,5 n == " << n/2
         << "\n square root n == " << sqrt (n)
         << '\n';
}
