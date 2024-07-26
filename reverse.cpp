// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <algorithm> 

int reverseString(string str){
    std::string res;
    int j=0;
    int len = str.size() - 1;
    for(int i=len; i >= 0; i--){
        res += str[i];
        j++;
    }
    std:cout<<res<<std::endl;
    return 0;
}

int main() {
    std::string str = "Hello World";
    // std::reverse(str.begin(), str.end());
    reverseString(str);
    // std::cout<<str<<std::endl;
    return 0;
}