#include <iostream>
#include<iomanip>
#include<array>

using namespace std;

int main()
{
    array<int,15>bonus={1,5,6,4,8,9,10,42,53,26,4,17,15,12,99};
    cout<<"Element"<<setw(13)<<"Value"<<endl;

    for(size_t i=0;i<bonus.size();i++)
    {
        bonus[i]=bonus[i]+1;
        cout<<setw(7)<<i<<setw(13)<<bonus[i]<<endl;
    }
}
