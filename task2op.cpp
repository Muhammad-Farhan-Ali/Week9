#include<iostream>
#include<string>
using namespace std;

void reverseString(string word);

int main()
{
    string word;

    cout<<"Enter a string:";
    cin>>word;

    reverseString(word);

    return 0;
}
void reverseString(string word)
{
    int x= word.size();
    for(int i=x;i>=0;i--)
    {
        cout<<word[i];
    }
}