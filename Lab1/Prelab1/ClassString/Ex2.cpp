#include <iostream>
#include <string>
using namespace std;

void findAllIndex(string s1, string s2){
    size_t pos = s1.find(s2[0]);  
    bool found = false;

    while (pos != string::npos) {
        cout << pos << " ";
        found = true;
        pos = s1.find(s2[0], pos + 1);  
    }

    if (!found) {
        cout << -1;  
    }
}

int main(){
    string s1 = "Truong Dai Hoc Bach Khoa.";
    string s2 = "a";
    findAllIndex(s1, s2);
    return 0;
}