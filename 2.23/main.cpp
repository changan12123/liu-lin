#include <iostream>

using namespace std;


int main()
{
    int a,b,c,d,e,largest,smallest;
    cout<<"enter five numbers"<<endl;
    cin >>a>>b>>c>>d>>e;
    largest=a;
    smallest=a;
    if (b>largest){
        largest=b;
    }
    if (c>largest){
        largest=c;
    }
    if (d>largest){
        largest=d;
    }
    if (e>largest){
        largest=e;
    }
    if (b<smallest){
        smallest=b;
    }
    if (c<smallest){
        smallest=c;
    }
    if (d<smallest){
        smallest=d;
    }
    if (e<smallest){
        smallest=e;
    }
    cout<<"Largest is"<<largest<<endl;
    cout<<"Smallest is"<<smallest<<endl;
}

