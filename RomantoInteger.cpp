#include <iostream>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int len = s.size();
        int cant = 0;
        for (int i = len-1; i>= 0 ; i--){
            if ( s[i] == 'I'){
                cant++;
            }
            if (s[i] == 'V' and i!= 0 and s[i-1] == 'I' ){
                cant+= 4;
                i--;
            }
            else if (s[i] == 'V' ){
                cant+=5;
            }
            if (s[i] == 'X' and i!= 0 and s[i-1] == 'I' ){
                cant+= 9;
                i--;
            }
            else if (s[i] == 'X' ){
                cant+=10;
            }
            if (s[i] == 'L' and i!= 0 and s[i-1] == 'X' ){
                cant+= 40;
                i--;
            }
            else if (s[i] == 'L' ){
                cant+=50;
            }
            if (s[i] == 'C' and i!= 0 and s[i-1] == 'X' ){
                cant+= 90;
                i--;
            }
            else if (s[i] == 'C' ){
                cant+=100;
            }
            if (s[i] == 'D' and i!= 0 and s[i-1] == 'C' ){
                cant+= 400;
                i--;
            }
            else if (s[i] == 'D' ){
                cant+=500;
            }
             if (s[i] == 'M' and i!= 0 and s[i-1] == 'C' ){
                cant+= 900;
                i--;
            }
            else if (s[i] == 'M' ){
                cant+=1000;
            }

        }
    return cant;
    }
};


int main(){
    Solution s ;
    string word = "LVIII";
     int result = s.romanToInt(word);
     cout<<result;

}