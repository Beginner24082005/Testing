#include <iostream>
using namespace std;

int** readArray()
{
   //TODO
   int** matrix = new int*[10];
    for (int i = 0; i < 10; ++i) {
        matrix[i] = new int[10];
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 0) {
                for (int k = j + 1; k < 10; ++k) {
                    matrix[i][k] = 0;
                }
                break; 
            }
        }
    }

    return matrix;
}

int main(){
    int **arr = new int *[10];
    arr = readArray();
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cout << arr[i][j] << " ";
        }    
        cout << endl;
    }
    return 0;
}


