#include<iostream>

using namespace std;

void rotate(int arr[ ], int k, int n)
{
    int temp[3]={1,2,3};
    
     for(int i=k;i<n;i++)
      {
          
        arr[i-k]=arr[i];
        
      }
    for(int t=n-k;t<n;t++)
    {
        
        arr[t]=temp[t-(n-k)];
    }
    
    for(int j=0;j<n;j++)
    {
        cout<<arr[j];
    }
   
}

int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    rotate(arr, 3, 7);
    
}
