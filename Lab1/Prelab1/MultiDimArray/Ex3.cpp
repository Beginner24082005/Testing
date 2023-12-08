#include <iostream>
#include <climits>
#include <string>
using namespace std;

bool isSymmetric(int arr[][1000], int row, int col){
    bool check = true;
    for (int i = 0; i <= row - 1; i++){
        for (int j = 0; j <= col - 1; j++){
            if (i==j) continue;
            else{
                if (arr[i][j] != arr[j][i]){
                    check = false;
                }
                else continue;
            }
        }
    }
    return check;
}
int main(){
    int arr[][1000] = {{1,9,6}, {4,5,3}, {6,3,9}};
    cout << isSymmetric(arr,3,3);
    return 0;
}