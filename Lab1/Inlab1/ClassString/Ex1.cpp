#include <iostream>
#include <string>
using namespace std;
void replaceString(string s, string s1, string s2){
    size_t found = s.rfind(s1);
    s.replace(found, s1.length(), s2);
    cout << s;
}
int main(){
    string s = "Truong Dai Hoc Bach Khoa, Sai Gon";
    string s1 = "ai";
    string s2 = "ong";
    replaceString(s, s1, s2);
}