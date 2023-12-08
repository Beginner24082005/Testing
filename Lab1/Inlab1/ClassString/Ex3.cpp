#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int length = s.length();
    int subSize = 1;
    int maxSubSize = 1;
    for (int i = 0; i <= length - 1; i++){
        if (s[i] == s[i - 1]){
            subSize++;
        }
        else{
            maxSubSize = max(subSize, maxSubSize);
            subSize = 1;
        }
    }
    maxSubSize = max(maxSubSize, subSize);
    cout << maxSubSize << endl;
    return 0;
}