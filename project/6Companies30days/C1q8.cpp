#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		int CountWays(string str){
		    if(str.length()==0 || str[0]==0)
		    return 0;
		    if(str.length()==1)
		    return 1;
		    int cp=1,cpp=1;
		    for(int i=1;i<str.length();i++)
		    {
		        int d=str[i]-'0';
		        int dd=(str[i-1]-'0')*10+d;
		        int count=0;
		        if(d>0)
		        {
		            count+=cp;
		        }
		        if(dd>=10 && dd<=26)
		        {
		            count+=cpp;
		        }
		        cpp=cp;
		        cp=count;
		    }
		    return cp;
		}
};