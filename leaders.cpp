#include<iostream>

using namespace std;

void leader_array(int arr[])
{
    int greatest =0 ;
    for ( int i=0;i<6;i++)
    {
        //greatest =0;
        if(i==6-2)
            {
                greatest=arr[i+1];
                arr[i]=greatest;
                i++;
                arr[i]=-1;
                break;
            }
          
        for(int j=i+2;j<6;j++)
        {
            int k=i+1;
            
            if(arr[j]>arr[k])
            {
                greatest = arr[j];
                break;
            }
            
            
            greatest = arr [k];
                
            
        }
        
        arr[i]=greatest;
    }

    for(int k=0;k<6;k++)
    {
        cout<<arr[k];
        
    }
}


int main()
{
    
    
    int arr[6]={17,18,5,4,6,1};
    leader_array(arr);
    return 0;
}
