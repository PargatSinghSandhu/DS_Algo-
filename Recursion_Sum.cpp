#include<iostream>

using namespace std;

void sum1(int i, int sum)
{
    if(i<1)
    {
        cout<<sum;
        return;
    }


    sum1(i-1,sum+i);
}




int main() 
{
    int N=2, sum=0;
    sum1(N,sum);
    
}
