#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int len = s.size();
        for (int i = 0; i <len-1; i++){
           for ( int j = i+1; j<len; j++){
            if (s[i] == '[' && s[j] == ']'){
                i++;
                break;
            }
            else if (s[i] == '(' && s[j] == ')'){
                i++;
                break;
            }
            else if (s[i] == '{' && s[j] == '}'){
                i++;
                break;
            }
            else{
                if (s[i] == '[' && s[j] != ']' && j == len-1 ){
                    return false;
                }
                else if (s[i] == '{' && s[j] != '}' && j == len-1 ){
                    return false;
                }
                else if (s[i] == '(' && s[j] != ')' && j == len-1 ){
                    return false;
                }
                }
                i++;
           }    
        }  
        return true;
    }
};

int main(){
    Solution s ;
    string word =  "([)]";
    bool result = s.isValid(word);
    cout<<result;

}