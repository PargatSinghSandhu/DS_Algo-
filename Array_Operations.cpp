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

void Insert(struct Array *arr, int index, int x)
{
    
    if(index>=0 && index<=arr->length)
    for(int j=arr->length;j>index;j--)
    {
        arr->A[j]=arr->A[j-1];
    }
    arr->A[index]=x;
    arr->length++;
    
    
}

int main()
{
    struct Array arr = {{2,4,5,6,7},20,5};
    Append(&arr,15);
    Insert(&arr,3,90);
    Display(arr);
    
    return 0;
    
}

