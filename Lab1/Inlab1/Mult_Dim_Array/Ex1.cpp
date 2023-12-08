#include <iostream>
#include <string>
using namespace std;
int ascendingRows(int arr[][1000], int row, int col){
    bool check = true;
    int count = row;
    for (int i = 0; i <= row - 1; i++){
        for (int j = 0; j <= col - 2; j++){
            if (arr[i][j] > arr[i][j + 1]){
                check = false;

            }
        }   
        if (check == false) count--;
        check = true;
    }
    return count;
}
int main(){
    int arr[][1000] = {{-28,-8,-60,18},{-100,44,-1,24},{-94,92,-70,75}};
    cout << ascendingRows(arr,3,4);
}