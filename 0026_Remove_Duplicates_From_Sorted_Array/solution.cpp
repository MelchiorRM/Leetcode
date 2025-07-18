#include <iostream>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int writer = 0;
        for (int reader = 1; j < nums.size();++reader) {
            if (nums[reader] != nums[writer]){
                writer++;
                nums[writer] = nums[reader];
            }
        }
        return writer + 1;
    }
};
return 0;