#include <iostream>
using namespace std;

void process(const char str[], char outstr[]){
    int idx = 0;
    int count = 0;
    while (str[idx] != '\0'){
        count++;
        idx++;
    }
    idx = 0;
    for (int i = 0; i <= count - 1; i++){
        outstr[i] = str[count - 1 - i];
    }
    outstr[count] = '\0';
}
int main(){
    const int MAX_SIZE = 100;
    char str[] = "this is my school" ;
    char outstr[MAX_SIZE];
    process(str, outstr);
    cout << outstr;
    return 0;
}