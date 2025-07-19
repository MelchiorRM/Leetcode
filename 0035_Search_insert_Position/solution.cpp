#include <iostrem>
using namespace std;
class Solution{
    public:
    int searchInsert(vector<int>& nums, int target){
        int left = 0; int right = nums.size()-1;
        while(left<=right){
            int center = (left+right)/2;
            if(nums[center]==target) return center;
            else if (nums[center]<target) left = center+1; //search in the right side
            else right = center-1; //search in the left side
        }
        return left;
    }
};
return 0;