#include<iostream>
#include<array>
using namespace std;

void missing_no( int arr1[], int n1)
{
    for(int i=0;i<n1;i++)
    {
        int flag=0;
        for(int j =0;j<n1;j++)
        {
            if(arr1[j]==i)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"Missing number: "<<i;
        }
    }
    
}




int main()
{
    int arr1[] = {1,2,4,5};
    int n1 = end(arr1) - begin(arr1);
    missing_no(arr1, n1);
}
