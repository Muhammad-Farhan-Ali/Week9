#include<iostream>
using namespace std;

double calculateResistance(double resistance[],int size);

int main()
{
    int n;

    cout<<"Enter the number of resistors connected in series: ";
    cin>>n;

    double resistance[n];

    cout<<"Enter resistance (ohm) in series: "<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>resistance[i];
    }

    cout<<"Total resistance of series circuit: "<<calculateResistance(resistance,n)<<" ohm!"<<endl;

    return 0;
}
double calculateResistance(double arr[],int size)
{
    double sum=0;
    for(int j=0;j<size;j++)
    {
        sum=sum+arr[j];
    }
    return sum;
}