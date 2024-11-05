#include<iostream>
using namespace std;

int main()
{
    int sum=0,average=0;
    int a[5]={1,2,3,4,5};

    for(int i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    average=sum/5;

    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<average<<endl;

    return 0;
}