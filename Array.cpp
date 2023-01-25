#include<iostream>


using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};         //array defined in stack 
    int *p, *q;                     //pointers will be used to define and access the array in heap.
    
    p = new int [5];
    q=new int [10];
    for(int j=0;j<5;j++)
    {
        cin>>p[j];
    }
    for(int k=0;k<5;k++)
    {
        q[k]=p[k];
    }
   
    
    
    
    delete []p;
    p=q;
    q=NULL;
    
    for(int i=0;i<5;i++)
    {
        cout<<p[i];
    }
    
    
    return 0;
}
