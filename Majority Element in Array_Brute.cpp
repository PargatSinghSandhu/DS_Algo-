#include<iostream>

using namespace std;

int majority_element( int arr[6])
{   
    
    for( int i=0;i<6;i++)
    {
        int c=0;
        for(int j=0;j<6;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                //cout<<c;
            }
            //cout<<c;
            
        }
        if(c>6/2)
        {
            return arr[i]; 
        }
        
    }
  


}



int main ()
{
    int arr[6]={2,3,2,2,2,4};

    int res = majority_element(arr);
    cout<<res;
}