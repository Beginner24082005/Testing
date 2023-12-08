#include<iostream>
#include<string>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

/* END of library */


int gcdRecursion(int p, int q)
{
    // BEGIN YOUR IMPLEMENTATION [1]
    // TODO
    if (q == 0) {
        return p;
    } 
    else {
        return gcdRecursion(q, p % q);
    }
   
    // END YOUR EMPLEMENTATION [1]
}

int gcdIteration(int p, int q)
{
    // BEGIN YOUR IMPLEMENTATION [2]
    // TODO
    int GCD = 0;
    for (int i = 1; i <= p; i++){
        if (p % i == 0 && q % i == 0){
            GCD = max(i, GCD);
        }
    }
   
    // END YOUR EMPLEMENTATION [2]
    return GCD;
}

int main()
{

    int p,q;
    cin>>p>>q;
    cout<<gcdRecursion(p,q)<< " "<<gcdIteration(p,q);
    return 0;
}