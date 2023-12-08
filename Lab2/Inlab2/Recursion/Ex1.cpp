#include <iostream>
using namespace std;

bool checkDuplicate(int* ar,int size)
{
    if (size <= 1) {
        return true;
    }

    for (int i = 1; i < size; i++) {
        if (ar[0] == ar[i]) {
            // Found a duplicate.
            return false;
        }
    }
    return checkDuplicate(ar + 1, size - 1);

}

int main(){
    int size = 5;
    int arr[5] = {1, 2, 5, 3, 5};
    cout << checkDuplicate(arr, size);
    return 0;
}