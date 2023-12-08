#include <iostream>
#include <cstring>
using namespace std;

void printFirstRepeatedWord(const char str[]) {
    
    const int MAX_WORDS = 100; 
    const char* words[MAX_WORDS];
    int wordCount = 0;
    
    char strCopy[strlen(str) + 1];
    strcpy(strCopy, str);
    char* token = strtok(strCopy, " ,.-");
    while (token != NULL && wordCount < MAX_WORDS) {
        words[wordCount++] = token;
        token = strtok(NULL, " ,.-");
    }
    
    for (int i = 0; i < wordCount; ++i) {
        for (int j = i + 1; j < wordCount; ++j) {
            if (words[i] == words[j] == 0) {
                cout << words[i] << endl;
                return;
            }
        }
    }
    cout << "No Repetition" <<endl;
}

int main() {
    char str[] = "car taxi bike bike car taxi";
    printFirstRepeatedWord(str);
    return 0;
}

