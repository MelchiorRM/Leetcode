#include <iostream>
using namespace std;
class Solution {
    public:
        int strStr(string haystack, string needle) {
            int n_haystack = haystack.length();
            int n_needle = needle.length();
            if (n_needle == 0) return 0;
            for (int i=0; i<=n_haystack - n_needle; i++) {
                if (haystack.substr(i, n_needle) == needle) {
                    return i;
            }
        }
            return -1;
        }
};
return 0;