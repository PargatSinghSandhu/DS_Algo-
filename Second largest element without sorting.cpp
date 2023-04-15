#include<iostream>
#include<limits.h>
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

int SlargestElement(int arr[], int n)
{
    int largest = arr[0];
    int slargest = INT_MIN;
    for(int i=1;i<n;i++)
        if(arr[i]>largest)
            {
            slargest = largest;
            largest = arr[i];
            }
        else if(arr[i]<largest && arr[i]>slargest)
        {
            slargest = arr[i];
        }
    return slargest;
}



int main()
{
    int arr[6]={1,0,2,10,2};
    
    //cout<<LargestElement(arr, 6);
    
    cout<<"Second Largest: "<<SlargestElement(arr, 6);
}
