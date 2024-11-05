#include<iostream>
using namespace std;

int main()
{
    int num=0;

    cout<<"Enter number of elements in array:";
    cin>>num;

    const int n=num;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter element: ";
        cin>>a[i];
    }

    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<endl;
    }

    return 0;
}