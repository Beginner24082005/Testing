#include <iostream>
#include <string>
using namespace std;

void cutString(string s, int index){
    cout << s.substr(index, s.size() - index);
}

int main(){
    string s = "Truong Dai Hoc Bach Khoa.";
    cutString(s, 7);
    return 0;
}