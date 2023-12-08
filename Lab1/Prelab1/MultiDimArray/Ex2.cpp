#include <iostream>
#include <climits>
#include <string>
using namespace std;

int diagonalProduct(int arr[][1000], int row, int col){
    int prod = 1;
    for (int i = 0; i <= row - 1; i++){
        prod = prod * arr[i][i];
    }
    return prod;
}
int main(){
    int arr[][1000] = {{-11,44,18,33},{-34,-9,-42,-42},{47,-26,4,-8},{-35,11,-34,-19}};
    cout << diagonalProduct(arr,4,4);
    return 0;
}