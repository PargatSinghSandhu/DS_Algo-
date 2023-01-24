#include<iosteam>
#include<stack>

using namespace std;




void reverse(int<stack>s)
{
    if(s.size)
        
    {
        
    }
    
    int temp=s.top();
    s.pop();
    reverse(s);
    insert(s,temp);
    return s;
}


int main()
{
    
int arr[]={1,2,3,4,5}, top=-1, s[5];
for(int i=0;i<5;i++)
{
    top++;
    s[top]=arr[i];
}



}
