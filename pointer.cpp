#include<iostream>
using namespace std;

int main()
{
    int a=12;
    int *p;
    p=&a;
    
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of pointer: "<<*p;
    return 0;
}
