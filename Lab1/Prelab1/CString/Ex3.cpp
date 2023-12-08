#include <iostream>
using namespace std;

int calc(const char str[]){
    int idx = 0;
    int count = 0;
    int sum = 0;
    while (str[idx] != '\0'){
        count++;
        idx++;
    }
    int prod = 1;
    for (int i = count - 1; i >= 0; i--){
        for (int j = 2; j <= count - i; j++){
            prod = prod * 2;
        }
        prod = prod * ((int)str[i] - 48);
        sum = sum + prod;
        prod = 1; 
    }
    return sum;
}
int main(){
    char str[] = "001011" ;
    cout << calc(str);
    return 0;
}