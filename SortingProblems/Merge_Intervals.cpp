#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){
        vector<vector<int>> intervals = {{2, 6}, {1, 3}, {8, 10}, {15, 18}};
    
           sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

        for (int i = 0; i < intervals.size(); i++) {
      
        for (int j = 0; j < intervals[i].size(); j++) {
            cout << intervals[i][j] << " ";
        }
        cout << endl;
    }

}