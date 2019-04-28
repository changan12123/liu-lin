#include <iostream>
#include<iomanip>
#include<array>

using namespace std;

int main()
{
    array<int,5>bestScores={95,94,89,99,98};
    cout<<"Element"<<setw(13)<<"Value"<<endl;
    for(size_t i=0;i<bestScores.size();i++)
        cout<<setw(7)<<i<<setw(13)<<bestScores[i]<<endl;
}

