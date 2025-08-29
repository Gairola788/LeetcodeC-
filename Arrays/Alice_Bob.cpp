#include<iostream>
using namespace std;

// class Solution {
// public:
//     long long flowerGame(int n, int m) {
        
//         long count = 0;
//     for(int i = 1;i<=n;i++){
//         for(int j =1;j<=m;j++){
//             if(((i + j)%2) != 0){
//                count++;
//             }
//         }
//     }
//    return count;
//     }
// };    brute-force solution is O(n·m) which works for small inputs, but fails for large test cases (likely due to TLE or integer overflow).
// ❌ Issue: O(n·m) complexity → TLE for big inputs


class Solution {
public:
    long long flowerGame(int n, int m) {
        long long oddN = (n + 1) / 2;
        long long evenN = n / 2;
        long long oddM = (m + 1) / 2;
        long long evenM = m / 2;

        return oddN * evenM + evenN * oddM;
    }
};


int main(){
    Solution sol;
    int n,m;
    cout<<"Enter the value for m and n: \n";
    cin>>n;
    cout<<endl;
    cin>>m;

    int ans = sol.flowerGame(n,m);
    cout<<"The count of pair by which ALice will always win the game :\n";
    cout<<ans;
   
}