// #include<iostream>
// using namespace std;
// int main(){
//     int N = 0;
//     cout << "Input N: "<<endl;
//     cin >> N;
//     int K = N;
//     char arr[N][N];
//     for (int i = N-1; i >= 0; i--){
//         for (int j = 0; j < K; j++){
//             arr[i][j] = '*';
//         }
//         for (int k = K; k < N; k++){
//             arr[i][k] = ' ';
//         }
//         K--;
//     }
//     for (int i = 0; i < N; i++){
//         for (int j = 0; j < N; j++){
//             cout << arr[i][j] <<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int N;

    // Input the value of N
    cout << "Enter the value of N: ";
    cin >> N;

    if (N <= 0) {
        cout << "N must be a positive integer." << endl;
        return 1; // Exit with an error code
    }

    int** arr = new int*[N];
    for (int i = 0; i < N; i++) {
        arr[i] = new int[N];
    }

    // Initialize variables
    int value = 1;
    int top = 0, bottom = N - 1, left = 0, right = N - 1;

    // Fill the array with the specified pattern
    while (value <= N * N) {
        // Fill the top row
        for (int i = left; i <= right; i++) {
            arr[top][i] = value++;
        }
        top++;

        // Fill the rightmost column
        for (int i = top; i <= bottom; i++) {
            arr[i][right] = value++;
        }
        right--;

        // Fill the bottom row
        for (int i = right; i >= left; i--) {
            arr[bottom][i] = value++;
        }
        bottom--;

        // Fill the leftmost column
        for (int i = bottom; i >= top; i--) {
            arr[i][left] = value++;
        }
        left++;
    }

    // Print the generated array
    cout << "Generated " << N << "x" << N << " Array:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < N; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
