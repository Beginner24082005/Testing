#include <iostream>
using namespace std;

int* flatten(int** matrix, int r, int c){
    int *newArr = new int[r * c];
    int count = 0;
    for (int i = 0; i <= r - 1; i++){
        for (int j = 0; j <= c - 1; j++){
            newArr[count] = matrix[i][j];
            count++;
        }
    }
    return newArr;
}

int main(){
    int **matrix = new int *[2];
    for (int i = 0; i <= 1; i++){
        matrix[i] = new int[2]; 
    }
    matrix[0][0] = 0;
    matrix[0][1] = 1;
    matrix[1][0] = 2;
    matrix[1][1] = 3;
    int *newMat = new int[4];
    newMat = flatten(matrix, 2, 2);
    for (int i = 0; i < 4; i++){
        cout << newMat[i] << " ";
    }
    return 0;
}