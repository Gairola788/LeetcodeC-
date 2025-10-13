#include<iostream>
#include<vector>
using namespace std;


class Solution{

public: 
   vector<int> rotate(vector<int> &nums,int k){ // this function takes O(n) times but extra space of O(n)
    
    vector<int> ans(nums.size());
    int i = 0;
    int j = nums.size() - k;
    int p = 0;

    while(j < nums.size()){
        ans[p++] = nums[j++];
    }

    while (i < nums.size() - k)
    {
        ans[p++] = nums[i++];
    }
    
    return ans;

   }

   

   void reversePart(vector<int>& nums, int start, int end) {
    while (start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

vector<int> rotateOpt(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // handle cases where k > n

    // Step 1: Reverse the whole array
    reversePart(nums, 0, n - 1);

    // Step 2: Reverse the first k elements
    reversePart(nums, 0, k - 1);

    // Step 3: Reverse the remaining n-k elements
    reversePart(nums, k, n - 1);

    return nums;
}

};

int main(){
    
    Solution sol;
    vector<int> nums = {1,2,3,4,5};
    int k = 3;

    // vector<int> res = sol.rotate(nums,k);
    vector<int> res = sol.rotateOpt(nums,k);


    for(int val: res){
        cout<<val<<" ";
    }
    cout<<"\n";
    

    return 0;
}