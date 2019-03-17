#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    int z=0;
    int m=0;
    int n=0;
    int p=0;

    cin>>x>>y>>z;
    m=x+y+z;
    n=m/3;
    p=x*y*z;
    cout<<"Input three different integers:"<<x<<" "<<y<<" "<<z<<endl;
    cout<<"Sum is "<<m<<endl;
    cout<<"Average is "<<n<<endl;
    cout<<"Product is "<<p<<endl;
    int min=x;
    if(min>y)
    min=y;
    if(min>z)
    min=z;
    cout << "Smallest is " << min<<endl;
    int max=x;
    if(max<y)
    max=y;
    if(max<z)
    max=z;
    cout << "Largest is " << max<<endl;
    return 0;
}

