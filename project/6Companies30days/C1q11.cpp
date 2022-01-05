#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
    int a1[2];
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        auto it=m.find(i);
        if(it==m.end())
        a1[1]=i;
        else
        {
            if(m[i]>1)
            a1[0]=i;
        }
    }
    int* ans=a1;
    return ans;
    }
};