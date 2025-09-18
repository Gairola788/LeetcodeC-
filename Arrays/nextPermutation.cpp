#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int piv = -1;

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                piv = i;
                break;
            }
        }
       
        if (piv == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        for (int i = n - 1; i > piv; i--) {
            if (nums[i] > nums[piv]) {
                swap(nums[i], nums[piv]);
                break;
            }
        }
 
        reverse(nums.begin() + piv + 1, nums.end());
    }
};



int main(){
    Solution sol;
   vector<int> nums = {1,2,3};

   sol.nextPermutation(nums);

   for(int val:nums){
    cout<<val<<" ";
   }
   cout<<endl;

}