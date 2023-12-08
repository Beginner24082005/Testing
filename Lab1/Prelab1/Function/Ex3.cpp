#include <iostream>
using namespace std;

void sum2(int * array, int numEls, int &result)
{
    result = 0;  // Initialize result to 0

    for (int i = 0; i < numEls; ++i) {
        result += array[i];
    }
    cout << result;
}

int main(){
    int numEls = 10;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result = 0;
    sum2(arr, numEls, result);
    return 0;
}