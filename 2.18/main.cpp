#include <iostream>
using namespace std;
int main ()
{
    int a = 0; // first integer to compare
    int b = 0; // second integer to compare

    cout << "Enter two integers to compare: ";
    cin >> a >> b;

    if ( a > b )
        cout << a  << "is large";
    if ( a < b )
        cout << b  << "is large";
    if ( a == b )
        cout << "These numbers are equal.:";
    return 0;
}
