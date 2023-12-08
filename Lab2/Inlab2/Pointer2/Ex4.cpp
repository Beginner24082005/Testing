#include <iostream>
using namespace std;

char* concatStr(char* str1, char* str2){
    int length = strlen(str1) + strlen(str2);
    char *res = new char[length + 1];
    for (int i = 0; i <= strlen(str1) - 1; i++){
        res[i] = str1[i];
    }
    for (int i = strlen(str1); i <= length - 1; i++){
        res[i] = str2[i - strlen(str1)];
    }
    res[length] = '\0';
    return res;
}

int main(){
    char s1[] = "Ho Chi Minh ";
    char s2[] = "University ";
    char s3[] = "of Technology.";
    char* temp = concatStr(s1, s2);
    char* s = concatStr(temp, s3);
    cout << s;
    delete[] s; delete[] temp;
    return 0;
}