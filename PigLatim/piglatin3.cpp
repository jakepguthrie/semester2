#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
string pigLatin(string word){

    
    string pigLatWord, pigLatSentence = "";
    int length = 0, index = 0;

    while (word[index] != '\0'){
        
        if (word.find(' ', index) != -1){
            length = word.find(' ', index);
            length -= index;
            pigLatWord = word.substr(index, length);
            pigLatWord.insert(length, "ay");
            pigLatWord.insert(length, 1, word[index]);
            pigLatWord.erase(0, 1);
            index += length + 1;
        }
        else{
            pigLatWord = word.substr(index);
            length = pigLatWord.length();
            pigLatWord.insert(length, "ay");
            pigLatWord.insert(length, 1, word[index]);
            pigLatWord.erase(0, 1);
            index = word.length();
        }

        pigLatSentence += (pigLatWord + " ");
    }
    return pigLatSentence;
}


int main()
{
    bool run = true;
    string sentance;
    cout << "Enter Input \n";
    getline(cin,sentance);
    cout << pigLatin(sentance) << cin;
    
    if (run = true){
            cout << "\n Press enter to exit";
            getchar();
            }
            
    return 0;
}
