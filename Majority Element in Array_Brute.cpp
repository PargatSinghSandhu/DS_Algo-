#include<iostream>

using namespace std;

int majority_element( int arr[6])
{   
    int count=0;
    int element;

    for( int i=0;i<17;i++)
    {
        

        for(int i=0;i<17;i++)
        {
                 
            if(count==0)
            {
                count=1;
                element=arr[i];
            }
            if(arr[i]==element)
            {
                count++;
            }
            else 
            {
                count--;
            }
        }

        
    }
    int count1;
    for( int i=0;i<17;i++)
    {   
        if(element==arr[i])
        {
            count1++;
        }
        
    }
    if(element>(6/2))
        {
            return element; 
        }
    return -1;
}



int main ()
{
    int arr[17]={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5,1};

    int res = majority_element(arr);
    cout<<res;
    return 0;
}
