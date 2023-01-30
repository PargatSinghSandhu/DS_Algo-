#include<iostream>


using namespace std;

struct Array
{
 
 int A[20];
 int size;
 int length;
};

void Display(struct Array arr)
{
    for(int i =0;i<arr.length;i++)
    {
        cout<<arr.A[i];
    }
    
}

int main()
{
    struct Array arr = {{2,4,5,6,7},20,5};
    Display(arr);
    return 0;
    
}

