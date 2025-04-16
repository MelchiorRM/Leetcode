#include <iostream>
#include <vector>
using namespace std;
class Solution { 
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int lenght = nums.size();
            for(int i=0;i<lenght;i++){
                for(int j=i+1;j<lenght;j++){
                    if(nums[i]+nums[j]==target){
                        return {i,j};
                    }
                }
            }
            return {};
        }
    };
int main() {
Solution sol;
int target;
vector<int> nums;
cout << "Enter the target: ";
cin >> target;
cout << "Enter the numbers): ";
int number;
while(cin>>number){
    nums.push_back(number);
}
vector<int> result = sol.twoSum(nums, target);
cout<<"Solutions: ["<<result[0]<<", "<<result[1]<<"]"<<endl;  
    return 0;
}