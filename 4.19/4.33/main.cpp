#include <iostream>

using namespace std;

int main()
{
 int a;
 int b;
 int c;
 bool isRightTriangle = false;

    cout << "Enter a:";
    cin >> a;

    cout << "b:";
    cin >> b;

    cout << "c:";
    cin >> c;

    int aSquare = a*a;
    int bSquare = b*b;
    int cSquare = c*c;

 if (aSquare + bSquare == cSquare) isRightTriangle = true;
 else if(aSquare + cSquare == bSquare) isRightTriangle = true;
 else if (bSquare + cSquare == aSquare) isRightTriangle = true;

 if(isRightTriangle)
    cout << "These could be sides to a triangle." << endl;
  else
    cout<<"These do not form a triangle." << endl;
}
