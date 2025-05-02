#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
    public:
        bool isValid(string s){
            unordered_map<char, char> couple = {
                {')', '('},
                {']', '['},
                {'}', '{'}
            };
            stack<char> pile;
            for (char c: s){
                if (couple.count(c)){
                    if (pile.empty() || pile.top() != couple[c]) {
                        return false;
                    }
                    pile.pop();
                } else {
                    pile.push(c);
                }
            }
            return pile.empty();
        }
};
int main(){
    Solution sol;
    string data;
    cout << "Enter a string of parentheses: ";
    cin >> data;
    if (sol.isValid(data)){
        cout << "The string is valid." << endl;
    } else {
        cout << "The string is invalid." << endl;
    }
    return 0;
}