#include <iostream>
using namespace std;
class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int i=0;
            int n=nums.size();
            while(i<n){
                if (nums[i]==val){
                    nums[i]=nums[n-1];
                    n--;
                } else {
                    i++;
                }
            }
            return n;
        }
};
return 0;