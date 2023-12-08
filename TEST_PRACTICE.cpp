#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    // Get the input sentence from the user
    string inputSentence = "You  are     students";

    // Use stringstream to split the sentence into words
    stringstream ss(inputSentence);
    vector<string> words;
    string word;

    while (ss >> word) {
        words.push_back(word);
    }

    // Use another stringstream to reconstruct the sentence with preserved spaces
    stringstream reversedSentence;
    size_t spaceCount = 0;

    for (int i = words.size() - 1; i >= 0; --i) {
        reversedSentence << words[i];

        // Count the number of spaces after each word (except for the last word)
        if (i > 0) {
            size_t pos = inputSentence.find(words[i - 1]) + words[i - 1].length();
            spaceCount = inputSentence.find_first_not_of(" ", pos) - pos;
            reversedSentence << string(spaceCount, ' ');
        }
    }

    // Print the reversed sentence with preserved spaces
    cout << reversedSentence.str() << endl;

    return 0;
}




