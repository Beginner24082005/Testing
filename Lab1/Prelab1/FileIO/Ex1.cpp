#include <iostream>
#include <climits>
#include <fstream>
using namespace std;

void calSum(string fileName){
    ifstream file(fileName);

    if (!file.is_open()) {
        cerr << "Error opening file: " << fileName << std::endl;
        return;
    }

    int number;
    int sum = 0;

    while (file >> number) {
        sum += number;
    }
    cout << sum;
    file.close();
}
int main(){
    calSum("input.txt");
    return 0;
}