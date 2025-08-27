#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution{
      public:
    bool containsDuplicate(vector<int>& nums) {
       
        map<int,int> mpp; // key = element, value = count

        for(int n: nums){
            mpp[n]++; //increment count
        }

        //if you find any key whose value is at least  2 return true;
        for(auto it: mpp){
            if(it.second > 1){
                return true;
            }
        }
     return false;
}
};

int main(){
    vector<int> nums ={1,2,3,1};
    Solution sol;
    bool result = sol.containsDuplicate(nums);
    
    if(result == true){
        cout<<"It contains dupliicate";

    }
    else{
        cout<<"It does not contains dupliicate";
    }

}