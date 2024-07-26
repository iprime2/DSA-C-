// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int gcd(int a, int b){
    int min = a < b ? a : b;
    
    for(int i=min; i>=2;  i--){
        if(a%i == 0 && b%i == 0){
            return i;
        }
    }
    return 1;
}

int main() {
    int n=4;
    int coprime = 0;
    for(int i=1; i<n; i++){
        if(gcd(i,n) == 1){
            coprime++;
        }
    }
    cout<<coprime;
    return 0;
}