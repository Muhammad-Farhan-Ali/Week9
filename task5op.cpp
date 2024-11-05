#include<iostream>
using namespace std;

bool isAlreadyEntered(int arr[],int size,int num,int i);

int main()
{
    int n,x=0;

    cout<<"Enter the number of elements of array: ";
    cin>>n;

    int a[n];
    int unique[x];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(isAlreadyEntered(a,n,a[i],i))
        {
            cout<<"Already entered: "<<a[i]<<endl;
        }
        
        else
        {
            unique[x]=a[i];
            x++;
        }
    }

    cout<<"Unique numbers entered:";

    for(int j=0;j<x;j++)
    {
        cout<<unique[j]<<" ";
    }

    return 0;
}
bool isAlreadyEntered(int arr[],int size,int num,int i)
{
    for(int j=0;j<size;j++)
    {
        if(num==arr[j] && j!=i)
        {
            return true;
        }
    }
    return false;
}