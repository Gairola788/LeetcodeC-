#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v;   
        for(int i =0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] + nums[j] == target){
                    v.push_back(i);  // add element at end
                    v.push_back(j);
                    break;
                }
            }
        }
        return v;
    }
};
  // ✅ main should be OUTSIDE the class
    int main(){
        cout<<"Find the two indices: "<<endl;
        Solution sol;  // create object of Solution
        vector<int> nums = {2, 7, 11, 15};
        int target = 9;
        cout<<"The two indices are: "<<endl;
        vector<int> result = sol.twoSum(nums, target);
        cout << "Indices: ";
        for(int i : result) {
        cout << i << " ";
        }
        cout << endl;

        return 0;
    }

