#include <cmath>
#include <iostream>

bool isPalindrome(int x) {
    if(x < 0){
        return false;
    }
    int n = 1, k = 0;
    int xEnd = x;
    while(xEnd >= 10){ 
        xEnd = x / pow(10, n);
        k++;
    }   
    while(k != n){
        int start = x / int(pow(10, k));
        int end = x % int(pow(10, n));
        if(start != end){
            return false;
        } else {
            n++;
            k--;
        }
    }
    return true;
}

int main(){
    bool res = isPalindrome(121);
    std::cout << res;
    return 0;
}