#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
class Solution {
    public:
        int romanToInt(string s) {
            unordered_map<char, int> roman = {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000}
            };
        int num=0;
        int prev=0;
        for(int i=s.length()-1; i>=0; i--){
            int curr=roman[s[i]];
            if(curr<prev){
                num=num-curr;
            } else{
                num=num+curr;
            }
            prev=curr;
        }
        return num;
    }
};
int main() {
    Solution sol;
    string data;
    cout << "Enter a Roman numeral: ";
    cin >> data;
    int value = sol.romanToInt(data);
    cout << "The integer value is: " << value << endl;
    return 0;
}