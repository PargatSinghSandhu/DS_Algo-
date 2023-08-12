#include<iostream>
#include<stdio.h>

using namespace std;
int po=0;

void print()
{

   
   if(po>4)
   {
    return;
   }
   cout<<po;
   po++; 
   print();


}



int main()
{
    print();
}