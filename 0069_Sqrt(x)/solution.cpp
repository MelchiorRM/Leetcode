#include <iostream>
using namespace std;
class Solution{
    public:
    int mySqrt(int x){
        int left = 0; int right = x; int answer= 0;
        while(left<=right){
            int center = left + (right-left)/2;
            long long square = (long long)center * center;
            if(square==x){
                return center;
            }
            else if(square<x){
                answer = center;
                left = center+1; //search in the right side
            }
            else {
                right = center-1; //search in the left side
            }
        }
        return answer;
    }
};
return 0;