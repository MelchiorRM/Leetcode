#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs){
            if (strs.empty()) return "";
            string prefix = "";
            for(int i=0; i<strs[0].size(); ++i){
                char c = strs[0][i];
                for (int j=1; j<strs.size(); ++j){
                    if (i >= strs[j].size() || strs[j][i] != c){
                        return prefix;
                    }
                }
                prefix += c;
            }
            return prefix;
        }
};
int main(){
    Solution sol;
    vector <string> table;
    cout << "Enter the number of strings: ";
    int n;
    cin >> n;
    cout << "Enter the strings: ";
    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        table.push_back(word);
    }
    string result = sol.longestCommonPrefix(table);
    if (result.empty()) {
        cout << "No common prefix found." << endl;
    } else {
        cout << "Longest common prefix: " << result << endl;
    }
    return 0;
}