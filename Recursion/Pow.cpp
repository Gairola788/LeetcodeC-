#include<iostream>
#include<cmath>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        
        if(n==1) return  x;

        return x * pow(x,n-1);

    }
};


int main(){
    Solution sol;
    double x = 2.10000;
    int n = 3;
    
    double res = sol.myPow(x,n);

    cout<<"Value is: "<<res;
    
    return 0;
}