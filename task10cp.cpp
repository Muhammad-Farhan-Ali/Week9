#include<iostream>
#include<string>
using namespace std;

string combine(string argument);

int main()
{
    string arg;

    cout<<"Enter an argument: ";
    getline(cin,arg);

    cout<<"Result: "<<combine(arg)<<endl;

    return 0;
}
string combine(string argument)
{
    string add="something ";
    return add+argument;

}