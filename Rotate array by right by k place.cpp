#include<iostream>

using namespace std;

void left_rotate_one(int arr[], int n)

{
    int i=0, rotate=3;
    
    while(rotate!=0)
    {
        int temp = arr[n-1];
        for(i=n-1;i>0;i--)
        {
        arr[i]=arr[i-1];
        
        }
        arr[i]=temp;
        rotate--;
        for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<"\n";
        
    }
    
}

int main()
{
    int arr[6]={1,2,10,23,4,12};
    left_rotate_one(arr,6);
    
}
