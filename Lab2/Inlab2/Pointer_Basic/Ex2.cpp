#include <iostream>
using namespace std;

void add(int *ptr, int n, int k){
    *(ptr + n) = k;
}

int main(){
    int arr[100] = {3, 9, 20, 6, 18, 0, 16, 8, 15, 14};
    int n = 10;
    int k = 0;
    add(arr, n, k);
    cout << arr[n];
    return 0;
}