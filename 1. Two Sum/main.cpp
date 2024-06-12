#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> solution;
        for(unsigned i = 0; i < nums.size(); i++){
            for(unsigned j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    solution.push_back(i);
                    solution.push_back(j);
                    break;
                }
            }
        }
        return solution;
    }
};

int main(){
    Solution solution;
    vector<int> array;
    array.push_back(2);
    array.push_back(7);
    array.push_back(11);
    array.push_back(15);
    int target = 9;
    array = solution.twoSum(array, target);
    for(unsigned i = 0; i < array.size(); i++){
        cout << array[i] << " ";
    }
    return 0;
}