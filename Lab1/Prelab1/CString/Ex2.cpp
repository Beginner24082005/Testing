#include <iostream>
using namespace std;

void process(char str[], char outstr[]) {
    int count=0;
    for (int i=0;i<strlen(str);i++){
        if ((count == 0 && str[i] == ' ') || (str[i] == str[i + 1] && str[i] == ' ') ||
        (i == strlen(str) - 1 && str[i] == str[i - 1] && str[i - 1] == ' ')){
            continue;
        }
        outstr[count]=str[i];
        count++;
    }
    outstr[count]='\0';
}  

int main(){
    const int MAX_SIZE = 100;
    char str[] = "  abc  def  ghi  " ;
    char outstr[MAX_SIZE];
    process(str, outstr);
    cout << outstr;
    return 0;
}