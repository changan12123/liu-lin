#include <iostream>
#include<iomanip>
#include<array>

using namespace std;

int main()
{
    array<double,11>a={1,2.1,3,2,4,6,8,5,5.6,45,15};
    array<double,34>b={9.9,8.6,5,4,2,1,6,7,1.2,8,56,78,63,6.3,74,2.2,4,1,1,2,2,3,3.3,6,7,8,5,6,4,8.8,4.1,6,5,7};
    cout<<"Element"<<setw(13)<<"Value"<<endl;
    for(size_t i=0;i<a.size();i++)
       {
        b[i]=a[i];
        cout<<setw(7)<<i<<setw(13)<<b[i]<<endl;
       }

}
