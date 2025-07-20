#include <iostream>
using namespace std;
class Solution{
    public:
    int climbStairs(int n){
        // base cases
        int a=1; int b=2;
        if(n==1) return 1;
        if(n==2) return 2;
        // general case
        for(int i=3;i<=n;i++){
            int temp = a+b;
            a = b;
            b = temp;
        }
        return b;
    }
};
return 0;