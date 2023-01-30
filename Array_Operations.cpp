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

void Append(struct Array *arr, int x)  //Using call by address/refernce because wants to append changes will reflect in origianl array too.
{
    if(arr->length<arr->size)
    {
        arr->A[arr->length++]=x;
    }
}

int main()
{
    struct Array arr = {{2,4,5,6,7},20,5};
    Append(&arr,15);
    Display(arr);
    
    return 0;
    
}

