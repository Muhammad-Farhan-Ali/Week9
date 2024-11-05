#include<iostream>
using namespace std;

int findLargest(int arr[],int size);

int main()
{
    int n;

    cout<<"Enter number of elements of array:";
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    cout<<"Largest number in array is: "<<findLargest(array,n)<<endl;

    return 0;
}
int findLargest(int arr[],int size)
{
    int large=arr[0];
    for(int i=1;i<size;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
    }
    return large;
}