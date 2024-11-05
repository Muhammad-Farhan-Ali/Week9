#include<iostream>
using namespace std;

void Jazzify(string array[],int size);

int main()
{
    int n=0;

    cout<<"Enter the number of chords of array:";
    cin>>n;

    string chord[n];

    cout<<"Enter "<<n<<" chords of array:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>chord[i];
    }

    Jazzify(chord,n);

    return 0;
}
void Jazzify(string array[],int size)
{
    int x=0;
    string index;

    cout<<"Jazzified chords: [";

    for(int i=0;i<size;i++)
    {
        index=array[i];
        x=array[i].size();
        if(index[x-1]!='7')
        {
            array[i]=array[i]+"7";
        }
        cout<<array[i]<<",";
    }
    cout<<" ]";
}