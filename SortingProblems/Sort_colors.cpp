#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        
        for(int i = 0;i<n;i++){
            if(nums[i]==0){
                count0++;
            }
            else if(nums[i]==1){
                count1++;
            }
            else{
                count2++;
            }
        }

        int idx = 0;
        while(count0!=0){
           nums[idx] = 0;
           idx++;
           count0--;
        }

        while(count1!=0){
           nums[idx] = 1;
           idx++;
           count1--;
        }

        while(count2!=0){
           nums[idx] = 2;
           idx++;
           count2--;
        }


    }
};

int main(){
Solution sol;
vector<int> nums = {2,0,2,1,1,0,1,2,0,0};

sol.sortColors(nums);

for(int val: nums){
    cout<< val <<" ";
}

cout<<endl;

    return 0;
}


// Brute force - but optimal - use in built sort function to sort in nlogn but in built library not allowed in c++

