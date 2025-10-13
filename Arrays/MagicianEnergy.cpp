#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// This solution is not optimized for larger n values

class Solution{
    public:
    int maximumEnergy(vector<int>& energy, int k) {
       vector<int> dp(energy.size());
       int j = 0;
       for(int i = 0;i<energy.size();i++){
         for(int p=i;p<energy.size();p+=k){
            dp[j] += energy[p];
         }
         j++;
       } 

       int max = dp[0];  // Assume first element is the largest

    for (int i = 1; i < dp.size(); i++) {
        if (dp[i] > max) {
            max = dp[i];
        }
    }

    return max;

    }
};

int main(){

Solution sol;
vector<int> energy = {-2,-3,-1};
 int k = 3;

 int ans = sol.maximumEnergy(energy,k);

 cout<<ans;

return 0;

}