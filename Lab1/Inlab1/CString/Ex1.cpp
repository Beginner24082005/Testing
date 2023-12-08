#include <iostream>
#include <cstring>
using namespace std;

// void process(const char input[], char output[]) {
//     int index = 0;
//     bool isNewWord = true; 
//     for (int i = 0; input[i] != '\0'; ++i) {
//         if ((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')) {
            
//             if (isNewWord) {
//                 output[index++] = (input[i] >= 'a') ? input[i] - ('a' - 'A') : input[i];
//                 isNewWord = false;
//             } else {
                
//                 output[index++] = (input[i] <= 'Z') ? input[i] + ('a' - 'A') : input[i];
//             }
//         } else if (input[i] == ' ' || input[i] == '\0' || !((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z'))) {
            
//             if (!isNewWord) {
//                 isNewWord = true;
//                 if (index != 0 && output[index - 1] != ' ') {
//                     output[index++] = ' ';
//                 }
//             }
//         }
     
//     }

//     if (index > 0 && output[index - 1] == ' ') {
//         index--;
//     }

//     output[index] = '\0';
// }

void process(const char input[], char output[]) {
    int iLen = strlen(input);
    char newInput[100];
    for (int i = 0; input[i] != '\0'; i++){
        newInput[i] = input[i];
    }
    newInput[iLen] = '\0';
    bool firstChar = false;
    int count = 0;
    char *pch = strtok(newInput, " ");
    char *pchList[100];
    while (pch != NULL){
        pchList[count] = pch;
        pch = strtok(NULL, " ");
        count++;    
    }
    bool checkChar = false;
    char *tempChar;

    int idx = 0;
    // for (int i = 0; i <= count - 1; i++){
    //     char *aChar = pchList[i];
    //     for (int j = 0; j <= strlen(aChar) - 1; j++){
    //         if (aChar[j] <= 'z' && aChar[j] >= 'a' || aChar[j] <= 'Z' && aChar[j] >= 'A'){
    //             tempChar[idx] = aChar[j];
    //             idx++;
    //         }
    //     }
    //     tempChar[idx] = '\0';
    //     pchList[i] = tempChar;
    //     cout << tempChar << " ";
    //     tempChar = NULL;
    //     idx = 0;
    // }
    for (int i = 0; i <= count - 1; i++){
        char *aChar = pchList[i];
        for (int j = 0; j <= strlen(aChar) - 1; j++){
            if (aChar[j] <= 'z' && aChar[j] >= 'a' || aChar[j] <= 'Z' && aChar[j] >= 'A'){
                tempChar[idx] = aChar[j];
                idx++;
            }
        }
        output[i] = *tempChar;
        idx = 0;
    }
    
}

int main(){
    const int MAX_SIZE = 100;
    char str[] = "  doAn VAN *(()hau @!#$" ;
    char outstr[MAX_SIZE];
    process(str, outstr);
    cout << outstr;
}