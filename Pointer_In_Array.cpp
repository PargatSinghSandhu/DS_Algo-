#include<iostream>
using namespace std;

int main()
{
    int arr[6]={3,4,5,3,4,6};
    int *p;
    p=arr;
    cout<<"Value of array: ";
    for (int i=0;i<6;i++)
    {
        cout<<p[i];
    }
    
    //cout<<"Value of array: "<<arr[0]<<endl;
    //cout<<"Value of pointer: "<<*p<<" "<<p<<" "<<arr<<" "<<&arr;
    return 0;
}
