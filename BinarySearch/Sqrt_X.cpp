#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;
         
        int start = 0;
        int end = x - 1;

        while(start <= end){
           
            int mid = start + (end - start)/2;

            if((mid*mid) == x){
                return mid;
            }

            else if((mid*mid) > x){
                end = mid-1;
            }
            else{
                start = mid+1;
            }

        }
        
        
     return  end;;
    }
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    int sqrt = sol.mySqrt(x);
    cout<<sqrt;
}