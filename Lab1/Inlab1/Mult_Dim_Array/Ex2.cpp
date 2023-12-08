#include <iostream>
#include <string>
#include <vector>
using namespace std;
int primeColumns(int arr[][1000], int row, int col){
    int numPrime = 0;
    bool isPrime = true;
    int sumCol = 0;
    int count = 0;
    for (int i = 0; i <= col - 1; i++){
        for (int j = 0; j <= row - 1; j++){
            sumCol = sumCol + arr[j][i];
        }
        if (sumCol <= 1) isPrime = false;
        else{
            for (int k = 1; k < sumCol / 2; k++){
                if (sumCol % k == 0) count++;
            }
            if (count > 1) isPrime = false;
            else isPrime = true;
        }   
        if (isPrime == true) numPrime++;
        sumCol = 0;
        isPrime = true;
        count = 0;
    }
    return numPrime;
}
int main(){
    int arr[][1000] = {{34,-15,11,-70,-23,24},{-39,-90,63,-45,-52,48},{-42,92,55,92,82,81}};
    cout << primeColumns(arr,3,6);
    return 0;
}