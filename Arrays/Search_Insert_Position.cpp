#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

       int n = nums.size(); //use nums.size() for vectors to find no of elements in vector
        int low = 0; 
        int high = n -1;

        while( low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else{
                low =mid +1;
            }
        }
        return high  +1;
    }
};

int main(){
  vector<int> nums = {1,3,5,6};
  Solution sol;
  printf("Enter the element to found :\n");
  int target;
  scanf("%d",&target);
  
  int index = sol.searchInsert(nums,target);
  printf("Element found or to be inserted at :\n");
  printf("%d",index);

}