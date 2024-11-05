#include<iostream>
using namespace std;

void charPosition(string word);

int main()
{
    string word;

    cout<<"Enter a word:";
    cin>>word;

    charPosition(word);

    return 0;
}
void charPosition(string word)
{
    for(int i=0;word[i]!='\0';i++)
    {
        cout<<word[i]<<" found at position "<<i<<endl;
    }
}