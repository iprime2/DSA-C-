// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int countDigit(int n){
    int count = 0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}

int kDigitNo(int arr[], int n, int k){
    if(n<=0 || k <=0) {
        return 0;
    }
    int count = 0;
    for(int i=0; i<n; i++){
        // convet it to string -- solwer
        if(std::to_string(arr[i]).size() == k){
            count++;
        }
        // using mathmetical to count - faster
        // if(countDigit(arr[i]) == k){
        //     count++;
        // }
    }
    return count;
}

int main() {
    int k = 2;
    int n = 10;
    int t[n] = {1,2,22,3,34,899,112,3,44,552};
    
    cout<<kDigitNo(t,n,k);
}