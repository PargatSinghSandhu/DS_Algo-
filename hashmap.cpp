#include<iostream>
#include<map>

using namespace  std ;

void hash1()
{
    map<int, int> mymap;
    mymap[1]=10;
    mymap[2]=20;
    mymap[3]=30;

    for(auto it=mymap.begin(); it!=mymap.end(); ++it)
    {
        cout<<it->first;
    }
    
    if(mymap.find(4)!=mymap.end())
    {
        cout<<"Found";
    }
    else
    cout<<"Not found";

}



int main()
{
    hash1();
    return 0;
}