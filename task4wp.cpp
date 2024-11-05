#include<iostream>
using namespace std;

int main()
{
    int a[5];

    for(int i=0;i<5;i++)
    {
        cout<<"Enter number :";
        cin>>a[i];
    }

    cout<<"First element: "<<a[0]<<endl;
    cout<<"Last element: "<<a[4]<<endl;

    return 0;
}