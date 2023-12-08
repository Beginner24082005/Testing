#include <iostream>
using namespace std;

int** transposeMatrix(int** matrix, int r, int c){
    int **newArr = new int *[c];
    for (int i = 0; i < c; i++){
        newArr[i] = new int[r];
    }
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            newArr[j][i] = matrix[i][j];
        }
    }
    return newArr;
}

int main(){
    int **matrix = new int *[3];
    for (int i = 0; i <= 2; i++){
        matrix[i] = new int[4]; 
    }
    matrix[0][0] = 0;
    matrix[0][1] = 1;
    matrix[0][2] = 2;
    matrix[0][3] = 3;
    matrix[1][0] = 4;
    matrix[1][1] = 5;
    matrix[1][2] = 6;
    matrix[1][3] = 7;
    matrix[2][0] = 8;
    matrix[2][1] = 9;
    matrix[2][2] = 10;
    matrix[2][3] = 11;
    int **newMat = transposeMatrix(matrix, 3, 4);
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            cout << newMat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}