#include<iostream>
#include<stdio.h>

using namespace std;

void name(int i,int n)
{
  
  if(i>n)
  {
    return;
  }
  cout<<"Algo";
  name(i+1,n);

}


int main()
{
    int n;
    cout<<"How many times you want to print the name\n";
    cin>>n;

    name(1,n);
}