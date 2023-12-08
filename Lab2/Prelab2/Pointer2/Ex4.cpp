#include <iostream>
using namespace std;

void deleteMatrix(int**& matrix, int r){
    if (matrix != nullptr) {
        for (int i = 0; i < r; ++i) {
            delete[] matrix[i];
        }
        delete[] matrix;
        matrix = nullptr;
    }
}

int main(){
    int** m = new int*[2];
    m[0] = new int[2]; m[0][0] = 1; m[0][1] = 2;
    m[1] = new int[2]; m[1][0] = 1; m[1][1] = 3;
    deleteMatrix(m, 2);
    cout << m[0][0] << ' ' << m[0][1] << '\n' << m[1][0] << ' ' << m[1][1];
    return 0;
}