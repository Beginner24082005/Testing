#include <iostream>
#include <vector>
#include <string>
using namespace std;

int diagonalDiff(int arr[][1000], int row, int col, int x, int y){
    int d1_sum = 0, d2_sum = 0;

    for (int i = x, j = y; i < row && j < col; ++i, ++j) {
        d1_sum += arr[i][j];
    }
    for (int i = x - 1, j = y - 1; i >= 0 && j >= 0; --i, --j) {
        d1_sum += arr[i][j];
    }

    for (int i = x, j = y; i < row && j >= 0; ++i, --j) {
        d2_sum += arr[i][j];
    }
    for (int i = x - 1, j = y + 1; i >= 0 && j < col; --i, ++j) {
        d2_sum += arr[i][j];
    }

    if (d1_sum > d2_sum)
        return d1_sum - d2_sum;
    else
        return d2_sum - d1_sum;
}
int main(){
    int arr[][1000] = {{55,85,47,58},{31,4,60,67},{94,69,71,73},{51,62,64,90}};
    cout << diagonalDiff(arr,4,4,1,2);
    return 0;
}