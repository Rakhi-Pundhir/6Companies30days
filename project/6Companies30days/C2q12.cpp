#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string colName (long long int n)
    {
        
char str[50]; 
int i = 0; 

while (n > 0) {

int rem = n % 26;


if (rem == 0) {
str[i++] = 'Z';
n = (n / 26) - 1;
}
else 
{
str[i++] = (rem - 1) + 'A';
n = n / 26;
}
}
str[i] = '\0';


reverse(str, str + strlen(str));


return str;
    }
};