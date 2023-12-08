#include <iostream>
using namespace std;

int recursiveSearch(int& n , int m, int arr[], int index)
{
    if (index == n) {
        return -1; 
    }

    if (arr[index] == m) {
        for (int i = index; i < n - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        --n; 
        return index; 
    }
    int result = recursiveSearch(n, m, arr, index + 1);
    if (result != -1) {
        return result;
    }

    return -1;
}

int main(){
    return 0;
}