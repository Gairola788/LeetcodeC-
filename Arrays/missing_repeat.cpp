#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int> mpp;

        int n = grid.size();

        for(int i = 0;i<n;i++){
            for(int j=0;j<n;j++){
                int num = grid[i][j];
                 mpp[num]++;   
            }
        }

        vector<int> ans(2);

        for(int i = 1; i <= n*n; i++){
            if(mpp[i] > 1){
                ans[0] = i;   // repeated number
            }
            if(mpp[i] == 0){
                ans[1] = i;   // missing number
            }
        }
         
        return ans;
    }
};


int main(){
    Solution sol;

  vector<vector<int>> grid =  {{9,1,7},{8,9,2},{3,4,6}};
    
   vector<int> res = sol.findMissingAndRepeatedValues(grid);

   for(int val:res){
    cout<<val<<" ";
   }

   cout<<endl;

    return 0;
}