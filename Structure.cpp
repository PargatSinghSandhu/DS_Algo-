#include<iostream>
using namespace std;

struct student
{
    int id;
    int batch;
}s1,s2;

struct student s3;

int main()
{
    //struct Student s;
    s3.id=222;
    s3.batch=1212;
    
    cout<<s3.id<<" "<<s3.batch;
    return 0;
}
