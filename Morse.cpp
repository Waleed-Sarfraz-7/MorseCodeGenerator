#include <iostream>
using namespace std;
main(){
    cout << "Type the word you want to convert into morse code: " << endl;
    string word;
    cin >> word;
    string morse[] = {".-", "-...", "-.-.", "_..", ".", "..-.", "--.", "....", "..", ".---", "-.-", 
    ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    for(int i = 0; i < word.length(); i++){
        char c = tolower(word[i]);
        if(c >= 'a' && c <= 'z'){
            cout << morse[c - 'a'] << " ";
        }
    }
}