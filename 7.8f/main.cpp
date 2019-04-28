#include <iostream>
#include<iomanip>
#include<array>

using namespace std;

int main()
{
    double m=0,n=100;
    array<double,99>w;
    for(size_t i=0;i<w.size();i++)
    {
        cin>>w[i];
        if(m<w[i])
           m=w[i];
        if(n>w[i])
            n=w[i];
    }
    cout<<"Max= "<<m<<endl;
    cout<<"Min= "<<n<<endl;

}
