#include<iostream>
using namespace std;

bool isFound(string word,char letter);

int main()
{
    string word;
    char letter;

    cout<<"Enter a word:";
    cin>>word;
    cout<<"Enter letter to be checked in word:";
    cin>>letter;

    if(isFound(word,letter))
    {
        cout<<letter<<" is found in "<<word<<endl;
    }
    else
    {
        cout<<letter<<" is not found in "<<word<<endl;
    }

    return 0;
}
bool isFound(string word,char letter)
{
    for(int i=0;word[i]!='\0';i++)
    {
        if(word[i]==letter)
        {
            return true;
        }
    }
    return false;
}