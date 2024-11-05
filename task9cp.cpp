#include<iostream>
using namespace std;

bool canPay(float arr[],float amount); 

int main()
{
    float amount;
    float money[4];

    cout<<"Enter quarters: ";
    cin>>money[0];
    cout<<"Enter dimes: ";
    cin>>money[1];
    cout<<"Enter nickels: ";
    cin>>money[2];
    cout<<"Enter penny: ";
    cin>>money[3];

    cout<<"Enter amount to pay: $";
    cin>>amount;

    cout<<"Can you pay amount? ";

    if(canPay(money,amount))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}
bool canPay(float arr[],float amount)
{
    float totalAmount=((arr[0]*0.25)+(arr[1]*0.10)+(arr[2]*0.05)+(arr[3]*0.01));
    
    if(totalAmount-amount>=0)
    {
        return true;
    }
    
        return false;
    
}