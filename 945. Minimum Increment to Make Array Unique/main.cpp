#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int times = 0;
        sort(nums.begin(), nums.end());
        for(unsigned i = 1; i < nums.size(); i++){
            if(nums[i - 1] >= nums[i]){
                times += nums[i - 1] - nums[i] + 1;
                nums[i] += nums[i - 1] - nums[i] + 1;
            }
        }
        return times;
    }
}; // not my idea, mine was too slow, but my code

int main(){
    Solution solution;
    vector<int> array;
    array.push_back(3);
    array.push_back(2);
    array.push_back(1);
    array.push_back(2);
    array.push_back(1);
    array.push_back(7);
    cout<<solution.minIncrementForUnique(array);
    return 0;
}