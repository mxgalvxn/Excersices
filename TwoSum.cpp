#include <vector>
using namespace std;
#include <iostream>

 vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> result;
        int len1 = size(nums);
        for (int i = 0; i < len1 ; i++){
            for (int j = i+1; j<len1; j++ ){
                if (nums[i] + nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                }
            }   
        }
        return result;
    }

 vector<int> twoSum1(vector<int>& nums, int target) {
    vector <int> result;
    int len1 = size(nums);
    for (int i = 0; i < len1; i++){
        int dif = target - nums[i];
        int index = 0;
        if (nums[i] == dif){
            result.push_back(index);
            result.push_back(i);
        }
        index++;
    }
    return result;

 }

int main(){
    vector <int> array = {2,7,11,14};
    int target = 9;
    vector <int> result = twoSum1(array,target);
    cout<<result[0], result[1];

   
}