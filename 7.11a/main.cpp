#include <iostream>
#include<iomanip>
#include<array>

using namespace std;

int main()
{
    array<int,10>counts={1,5,5,6,4,8,6,21,4,9};
    cout<<"Element"<<setw(13)<<"Value"<<endl;
    for(size_t i=0;i<counts.size();i++)
    {
        counts[i]=0;
    cout<<setw(7)<<i<<setw(13)<<counts[i]<<endl;
    }
}
