#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = m - 1;       // last valid element in nums1
        int j = n - 1;       // last element in nums2
        int k = m + n - 1;   // last index of nums1

        // Merge from the back
        while(i >= 0 && j >= 0){
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--;
            }
            else{
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // If nums2 has remaining elements
        while(j >= 0){
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};

int main(){
  vector<int> nums1 = {1,2,3,0,0,0};
  int m = 3;
  vector<int> nums2 = {2,5,6};
  int n = 3;
  Solution sol;
  
  sol.merge(nums1,m,nums2,n);

}