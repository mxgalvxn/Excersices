#include <vector>
using namespace std;
#include <iostream>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len1;
        int result = 0;
        for ( int k = 0; k<s.length() ; k++ ){
        len1 = s.length();
        for (int i = 0 ; i< len1 ; i++ ){
            for ( int j = i+1; j < len1 ; j++){
                cout<< s[i];
                cout<<s[j]<<endl;
                if (s[i] == s[j] and j <= s.length()){ 
                    s.erase(s.begin()+j);
                }
                cout<<s<<endl;
            }
        }}
        len1 = s.length();
        return len1;
    }
};

int main(){
    Solution s ;
    string word = "aadfhkkgppeja";
     int result = s.lengthOfLongestSubstring(word);
     cout<<result;

}