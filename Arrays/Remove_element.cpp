#include<iostream>
#include<vector>
using namespace std;

class Solution {

public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        int i = 0;

        while( j < nums.size()){
            if(nums[j] == val){
                j++;
            }
            else{
                nums[i] = nums[j];
                j++;
                i++; 
            }
        }
        return i;
    }
};

int main(){
  vector<int>  nums = {3,2,2,3};
  int val = 3;

  Solution sol;
  int count = sol.removeElement(nums,val);
  cout<<"The number of distinct elements not equal to val are: "<<"\n";
  cout<<count;


}