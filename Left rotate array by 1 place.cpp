#include<iostream>

using namespace std;

void left_rotate_one(int arr[], int n)

{
    int temp = arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
}

int main()
{
    int arr[6]={1,2,10,23,4,12};
    left_rotate_one(arr,6);
    
}
