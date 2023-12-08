#include <iostream>
using namespace std;

int calcSum(int *ptr, int n){
    int sum = 0;
    for (int i = 0; i <= n - 1; i++){
        sum = sum + *(ptr + i);
    }
    return sum;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    cout << calcSum(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}