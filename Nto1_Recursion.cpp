#include<iostream>

using namespace std;


void Print(int n)
{
    if(n==1)
    { 
        cout<<n;
        return;
    }
    
    cout<<n;
    Print(n-1);
    
    
}




int main()
{
    int c;
    cout<<"Enter the value of n";
    cin>>c;
    
    Print(c);
}
