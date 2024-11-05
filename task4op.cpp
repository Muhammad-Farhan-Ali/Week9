#include<iostream>
using namespace std;

void reverseArray(int arr[],int n);

int main()
{
    int n;

    cout<<"Enter number of elements: ";
    cin>>n;

    if(n<=0)
    {
        cout<<"Invalid input!"<<endl;
        return 0;
    }

    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    cout<<"Numbers in reverse order: ";
    reverseArray(array,n);

    return 0;
}
void reverseArray(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}