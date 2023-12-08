#include <iostream>

using namespace std;

int main(int narg, char** argv)
{
    int N;
    cin >> N;
    long result;
    long prod = 1;
    if (N == 1 || N == 0) result = 1;
    else{
        for (int i = 1; i <= N; i++){
            prod = prod * i;
        }
        result = prod;
    }
    cout << result << endl;
    return 0;
}