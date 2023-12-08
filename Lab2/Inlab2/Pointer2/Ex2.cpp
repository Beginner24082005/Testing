#include <iostream>
using namespace std;

void addElement(int*& arr, int n, int val, int index) {
    int* newArr = new int[n + 1];
    for (int i = 0; i < index; i++){
        newArr[i] = arr[i];
    }
    for (int i = index + 1; i <= n; i++){
        newArr[i] = arr[i - 1];
    }
    newArr[index] = val;
    arr = newArr;
}

int main(){
    int n = 5;
    int *arr = new int[n];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;
    addElement(arr, 5, 9, 2);
    for (int i = 0; i <= n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}