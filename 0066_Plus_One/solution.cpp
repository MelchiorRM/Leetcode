#include <iostream>
using namespace std;
class Solution{
    public:
    vector<int> plusOne(vector<int>& digits){
        int n = digits.size()-1;
        for(int i = n;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits; // if the last digit is not 9, we can just add 1 to it and return the result
            }
            else {
                digits[i] = 0;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
return 0;