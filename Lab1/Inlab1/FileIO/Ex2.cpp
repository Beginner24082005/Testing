#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
void threeChars(string fileName){
    string buffer;
    ifstream file(fileName);
    bool check = false;
    file.is_open();
    file >> buffer;
    while (buffer != "***"){
        if (buffer[0] <= buffer[1] && buffer[1] <= buffer[2]) cout << "true" << endl;
        else cout << "false" << endl;
        file >> buffer;
    }
    file.close();
}
int main(){
    threeChars("Ex2.txt");
}