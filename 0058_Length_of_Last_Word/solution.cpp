#include <iostream>
using namespace std;
class Solution {
    public:
    int lengthOfLastWord(string s) {
        int i = s.length() -1;
        int length = 0;
        while(i>=0 && s[i]==' '){
            i--;
        }
        while(i>=0 && s[i]!=' '){
            length++;
            i--;
        }
        return length;
    }
};
return 0;