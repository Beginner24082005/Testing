#include <iostream>
using namespace std;

void insertRow(int**& matrix, int r, int c, int* rowArr, int row){
    if (matrix != nullptr && row >= 0 && row <= r) {
        int** tempMatrix = new int*[r + 1];
        for (int i = 0; i < row; ++i) {
            tempMatrix[i] = new int[c];
            for (int j = 0; j < c; ++j) {
                tempMatrix[i][j] = matrix[i][j];
            }
        }
        tempMatrix[row] = rowArr;
        for (int i = row; i < r; ++i) {
            tempMatrix[i + 1] = new int[c];
            for (int j = 0; j < c; ++j) {
                tempMatrix[i + 1][j] = matrix[i][j];
            }
        }
        for (int i = 0; i < r; ++i) {
            delete[] matrix[i];
        }
        delete[] matrix;
        matrix = tempMatrix;
    } 
}

int main(){
    int** m = new int*[2];
    m[0] = new int[3]; m[0][0] = 1; m[0][1] = 2; m[0][3] = 3;
    m[1] = new int[3]; m[1][0] = 4; m[1][1] = 5; m[1][3] = 6;
    int *rowArr = new int[3];
    rowArr[0] = 7;
    rowArr[1] = 8;
    rowArr[2] = 9;
    insertRow(m, 2, 3, rowArr, 2);

    return 0;
}