#include<iostream>
#include<utility>
#include<algorithm>


using namespace std;


void explainPair()
{
    
    std::pair<int, int> p =std::make_pair(1,3);

    std::cout<<p.first<<"  "<<p.second<<" ";

    std::pair<int, std::pair<int, int > > po = std::make_pair(4,std::make_pair(5,6));

    std::cout<<po.first<<"  "<<po.second.first;

    cout<<"         ";
    int arr[5]={3,10,2,19,12};
    std::sort(arr+2, arr+4);

    for(int i=0;i<3;i++)
    {
        cout<<arr[i];
    }

}


int main()
{
    explainPair();
    return 0;
}