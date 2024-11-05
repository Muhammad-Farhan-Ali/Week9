#include<iostream>
using namespace std;

bool isSpecial(int array[],int size);

int main()
{
    int n=0;

    cout<<"Enter the number of elements of array:";
    cin>>n;

    int array[n];

    cout<<"Enter "<<n<<" elements of array:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    if(isSpecial(array,n))
    {
        cout<<"This array is special!"<<endl;
    }
    else 
    {
        cout<<"This array is not special!"<<endl;
    }

    return 0;
}
bool isSpecial(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(!((i%2==0 && array[i]%2==0) || (i%2!=0 && array[i]%2!=0)))
        {
            return false;
        }
    }
    return true;
}