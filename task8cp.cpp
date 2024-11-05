#include<iostream>
using namespace std;

void insertArray(int arr1[],int size1,int arr2[],int size2);

int main()
{
    int n1,n2;

    cout<<"Enter the number of elements in first array (must be 2) :";
    cin>>n1;

    if(n1!=2)
    {
        cout<<"Invalid input!"<<endl;
        return 0;
    }
    
    int a1[n1];

    cout<<"Enter elements of first array: "<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>a1[i];
    }

    cout<<"Enter the number of elements in second array :";
    cin>>n2;

    int a2[n2];

    cout<<"Enter elements of second array: "<<endl;
    for(int j=0;j<n2;j++)
    {
        cin>>a2[j];
    }

    insertArray(a1,n1,a2,n2);

    return 0; 
}
void insertArray(int arr1[],int size1,int arr2[],int size2)
{
    int totalSize=size1+size2;

    cout<<"Resulting array: [ ";

    for(int i=0;i<totalSize;i++)
    {
        if(i==0)
        {
            cout<<arr1[i]<<", ";
        }
        else if(i==totalSize-1)
        {
            cout<<arr1[size1-1];
        }
        else
        {
            cout<<arr2[i-1]<<", ";
        }
    }
    cout<<"]";
}
