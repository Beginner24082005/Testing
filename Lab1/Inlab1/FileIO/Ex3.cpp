#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
void process(string fileName){
    ifstream file(fileName);
    int row = 0;
    int col = 0;
    int i = 0;
    int j = 0;
    float max_row = 0;
    float max = 0;
    file.is_open();
    file >> row >> col;
    float arr[row][col];
    for (int i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            file >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++){
        max_row = arr[i][0];
        for (int j = 0; j < col; j++){
            if (max_row <= arr[i][j]){
                max_row = arr[i][j];
            }
            
        }
        cout << max_row << " ";
    }
    
    max = arr[0][0];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if (max <= arr[i][j]) max = arr[i][j];
        }
    }
    cout << max;
    file.close();
}
int main(){
    process("Ex3.txt");
}