#include <iostream>
using namespace std;

class Solution {
    public:
        bool isPalindrome(int x) {
            if(x<0 || (x%10 == 0 && x!=0)) {
                return false;
            }
            int half_reversed = 0;
            while(x>half_reversed) {
                half_reversed = (half_reversed * 10) + (x % 10);
                x = x/10;
            }
            return (x == half_reversed || x == half_reversed/10);
        }
};
int main() {
    Solution sol;
    int data;
    cout << "Enter a number: ";
    cin >> data;
    if(sol.isPalindrome(data)) {
        cout <<data<<" is a palindrome number.\n";
    } else {
        cout <<data<<" is not a palindrome number.\n";
    }
    return 0;
}