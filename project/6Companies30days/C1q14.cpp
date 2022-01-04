#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int c=INT_MAX;
        int sum=0;
        while(j<nums.size())
        {
            sum+=nums[j];
            while(sum>=target)
            {
                c=min(c,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(c==INT_MAX)
            return 0;
        return c;
    }
};