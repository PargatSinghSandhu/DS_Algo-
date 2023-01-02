#include<iostream>
using namespace std;

int main()
{
    int *ar;
    ar=new int[3];
    
    ar[0]=1,ar[1]=3,ar[2]=9;
    
    cout<<"Value of array: ";
    for (int i=0;i<3;i++)
    {
        cout<<ar[i];
    }
    
    delete [ ] ar;
    
   
    return 0;
}
