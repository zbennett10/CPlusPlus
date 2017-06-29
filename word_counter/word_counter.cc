#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string input;
    getline (cin, input);
    cout << input.length();

    int whitespaceCount;
    for(short i = 0; i < input.length(); i++) {
        if(input[i] == ' ') {
            whitespaceCount++;
        }
    }


    vector<string> words;
    words.reserve(whitespaceCount + 1);
    int wordsIndexCounter = 0;
    int inputIndexCounter = 0;
    while(inputIndexCounter <= input.length()) {
        if(input[inputIndexCounter] == ' ') {
            wordsIndexCounter++;
        } else {
            words[wordsIndexCounter] += input[inputIndexCounter];
        }
        inputIndexCounter++;
    }

    

    cout << words.size();
    return 0;
}