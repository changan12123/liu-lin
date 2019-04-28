#include <iostream>
#include<iomanip>
#include<array>

using namespace std;

int main()
{
    double total=0;
    array<double,100>temperatures;
    for(size_t i=0;i<temperatures.size();i++)
    {
        cin>>temperatures[i];
        total=total+temperatures[i];
    }
    cout<<"Total of array elements: "<<total<<endl;
}
