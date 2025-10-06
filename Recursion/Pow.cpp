#include<iostream>

using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        
        if(n==0) return  1;

        else if(n%2 == 0){
            int y = myPow(x,n/2); // 0(logn)
            return y*y;
        }
        else{
            return x * myPow(x,n-1);
        }

    }
};


int main(){
    Solution sol;
    double x = 2;
    int n = 15;
    
    double res = sol.myPow(x,n);

    cout<<"Value is: "<<res;
    
    return 0;
}


// return x * myPow(x,n-1); //Brute force approach ; T.C. - 0(n);