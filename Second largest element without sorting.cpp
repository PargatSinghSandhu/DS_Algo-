#include<iostream>
using namespace std;

int LargestElement(int arr[], int n)
{
    int largest = arr[0];
    
    for(int i=0;i<n;i++)
    {
        if(largest<arr[i])
        {
            largest = arr[i];
        }
    }
    
    return largest;
}

int SLargestElement(int arr[], int n)
{
    int largest = arr[0];
    int slargest = 0;
    for(int i=0;i<n;i++)
    {
        slargest = largest;
        largest = a[i];
    }
}



int main()
{
    int arr[6]={1,0,2,10,2};
    
    //cout<<LargestElement(arr, 6);
    
    cout<<"Second Largest"<<SlargestElement(arr, 6);
}
