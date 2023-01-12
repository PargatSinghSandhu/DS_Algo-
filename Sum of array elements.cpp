    #include<iostream>
    using namespace std;
    
    void sum(int arr1[],int arr2[],int n)
    {
      int sum=0,arr3[10]={}, ones=0;
      for (int i=0;i<n;i++)
      {
          int temp=arr1[i]+arr2[i];
          if (temp>=0 && temp<=9)
          {
              arr3[i]= temp+ones;
          }
          else
          {
              int digit = temp%10;
              int number = temp/10;
              arr3[i]=digit+ones;
              ones=number;
              
          }
      }
      for (int j=0;j<5;j++)
      {
          cout<<arr3[j];
      }
      
    }
    
    int main ()
    {
      int arr1[] = {1,2,3,4,5};
      int arr2[] = {6,7,8,9,10};
      sum(arr1,arr2,5);
      
      return 0;
      
    }
