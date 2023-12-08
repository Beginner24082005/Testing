#include <iostream>
#include <climits>
using namespace std;

int findMaxColumn(int arr[][1000], int row, int col){
    int max = 0;
    int sum = 0;
    int idx = 0;
    for (int j = 0; j <= row - 1; j++){
        max = max + arr[j][0];
    }
    for (int i = 0; i <= col - 1; i++){
        for (int j = 0; j <= row - 1; j++){
            sum = sum + arr[j][i];
        }
        if (sum >= max){
            max = sum;
            idx = i;
        } 
        sum = 0;
    }
    return idx;
}
int main(){
    int arr[][1000] = {{-92,78,-2,-58,-37},{44,-4,30,-69,22}};
    cout << findMaxColumn(arr, 2,5);
    return 0;
}