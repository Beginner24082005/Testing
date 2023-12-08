#include <iostream>
using namespace std;

bool completeNum(int N){
    int sum = 0;
    bool check = false;
    for (int i = 1; i <= N/2 ; i++)
    if (N % i == 0){
        sum = sum + i;
    }
    if (sum == N) check = true;
    return check;
}
int main(){
    cout << completeNum(3);
}