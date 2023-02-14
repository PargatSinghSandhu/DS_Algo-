#include<iostream>
#include<stack>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5}, stack[5], top = -1;
    
    for (int i=0;i<5;i++)
    {
        top++;
        stack[top]=arr[i];
        if (stack[top]==5)
        {
            stack[top]=10;
        }
    }
    
    
    for (int j = 0; j<5;j++)
    {
        cout<<stack[j];
    
    }
    return 0;
}
