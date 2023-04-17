#include<iostream>

using namespace std;

void rotate(int arr[ ], int k)
{
    
     for(int i=k;i<6;i++)
      {
        
        arr[i-k]=arr[i];
        
      }
    
    for(int j=0;j<6;j++)
    {
        cout<<arr[j];
    }
   
}

int main()
{
    int arr[6]={1,2,3,4,5,6};
    rotate(arr, 3);
    
}
