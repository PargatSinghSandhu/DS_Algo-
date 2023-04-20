#include<iostream>
#include<vector>

using namespace std;


void Move_zeroes_end(int arr[], int n)
{
    vector <int> temp;
    for (int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp.push_back(arr[i]);
        }
    }
    
    for(int j=0;j<temp.size();j++)
     {
         arr[j]=temp[j];
     }
     
     for(int p=temp.size();p<n;p++)
     {
         arr[p]=0;
     }
    
    for(int k=0;k<n;k++)
    {
        cout<<arr[k];
    }
    
    
}


int main ()
{
    int arr[] = {1,0,2,10,5,0,0,3};
    Move_zeroes_end(arr, 8);
}
