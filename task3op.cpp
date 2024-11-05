#include<iostream>
#include<string>
using namespace std;

void nextLetter(string word);

int main()
{
    string word;

    cout<<"Enter a string:";
    getline(cin,word);

    nextLetter(word);

    return 0;
}
void nextLetter(string word)
{  
    char character;
    char nextCharacter;
    for(int i=0;i<word.size();i++)
    {
        character=word[i];
        int asciiCode=character;
        if(asciiCode!=32)
        {
        asciiCode++;
            if(asciiCode==123)
            {
                asciiCode=97;
            }
            else if(asciiCode==91)
            {
                asciiCode=65;
            }
        }
        nextCharacter=asciiCode;
        if((asciiCode>=65 && asciiCode<=90) && (asciiCode>=97 && asciiCode<=122) && (asciiCode==32))
        {
        cout<<nextCharacter;
        }
    }
}