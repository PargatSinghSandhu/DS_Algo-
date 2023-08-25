#include<iostream>

using namespace std;

int fact(int f)
{
    if(f<1)
    {
        return 1;
    }
    
    int fact1=f*fact(f-1);
    return fact1;
}


int main() 
{
    int N=3,fact1=1;
    int f =fact(N);
    
    cout<<f;
    
}
