#include<iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
       int n = s.length();
        string ans = "";

    reverse(s.begin(),s.end());

    for(int i=0;i<n;i++) {
        string word = "";
        while(i < n && s[i] != ' ') {
            word += s[i];
            i++; 
        }

        reverse(word.begin(),word.end());
        if(word.length() > 0){
            ans += " " + word;
        }
    }
  return ans.substr(1);
    }
};

int main(){
    Solution sol;
    string str  = "    The sky is Blue";
    string res = sol.reverseWords(str);
    cout<<"The rverse words in the string are :";
    cout<<res;
}