#include<iostream>
#include<string>
using namespace std;

void vowelCancel(string word);

int main()
{
    string word;

    cout<<"Enter a string:";
    getline(cin,word);

    vowelCancel(word);

    return 0;
}
void vowelCancel(string word)
{
    int x=word.size();

    for(int i=0;i<x;i++)
    {
        if((word[i]!='a') && (word[i]!='A') && (word[i]!='e') && (word[i]!='E') && (word[i]!='i') 
        && (word[i]!='I') && (word[i]!='o') && (word[i]!='O') && (word[i]!='u') && (word[i]!='U'))
        {
            cout<<word[i];
        }
    }
}