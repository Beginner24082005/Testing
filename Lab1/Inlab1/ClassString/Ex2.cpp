#include <iostream>
#include <string>
using namespace std;
void  deleteWord(string s, string s1){
    size_t found = s.find(s1);
    while (found != string::npos)
    {
        s.erase(found, s1.length());
        found = s.find(s1);
    }
    cout<<s;
}
int main(){
    string s = "Truong Dai Hoc Bach Khoa, Sai Gon";
    string s1 = "ai ";
    deleteWord(s, s1);
}