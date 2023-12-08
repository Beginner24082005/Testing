#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[10];
    for (int i = 0; i <= 9; i++){
        str[i] = 'a';
    }
    str[strlen(str) + 1] = '\0';
    cout << str << endl;
    return 0;
}