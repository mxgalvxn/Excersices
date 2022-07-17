#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=1){
            return n;
        }
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};

int main(){
    Solution s;
    vector <int> prueba = {0,0,1,2,2};
    int result = s.removeDuplicates(prueba);
    cout<<result<<endl;
    // for ( int i = 0; i < prueba.size(); i ++){
    //     cout<< prueba[i]<< ",";
    // }

}