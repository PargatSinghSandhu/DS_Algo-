#include<iostream>
using namespace std;

int main()
{
    int a=10;                                    
    int d=a;                                //Normal variable initilization
    d=11;
    
    int b=12;               
    int &r=b;                               //refernce variable intilization 
    r=13;
    
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of d: "<<d<<endl;
    cout<<"Value of b, referenced to r: "<<b<<endl;
    cout<<"Value of refernce variable: "<<r<<endl;
    
}
