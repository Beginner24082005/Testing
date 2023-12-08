#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
void uppercase(string output){
    string inputString;
    getline(cin, inputString);
    for (int i = 0; i <= inputString.length() - 1; i++) {
        if (islower(inputString[i])) {
            inputString[i] = toupper(inputString[i]);
        }
    }
    ofstream outputFile(output);
    if (outputFile.is_open()) {
        outputFile << inputString;
        outputFile.close();
    } else {
        cerr << "Error: Unable to open output file." << endl;
    }
    outputFile.close();
}
int main(){
    uppercase("Ex1.txt");
}