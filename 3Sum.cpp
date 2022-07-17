#include <vector>
using namespace std;
#include <iostream>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector <vector<int>> result;
        vector <int> array;
        int len = nums.size();
        for (int i = 0; i < len ; i++){ 
            for (int j = i+1; j < len ; j++){
                for (int k = j+1; k < len ; k++)
                if (nums[i] + nums[j] + nums[k] == 0 ){
                    array.push_back(nums[i]);
                    array.push_back(nums[j]);
                    array.push_back(k);
                    result.push_back(array);
                    array.clear();
                }
            }
        }
        for (int i = 0; i < len ; i++){
            
        }
        return result;
    }
    
};