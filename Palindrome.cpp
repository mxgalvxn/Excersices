#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int len = s.size();

        for (int i = 0; i< len-1 ; i++){
            if ( s[i] != s[len-1-i]){
                return false;
            }

        }
        return true;
    }
};


int main(){
    Solution s ;
    int num =  1234321;
    bool result = s.isPalindrome(num);
    cout<<result;

}