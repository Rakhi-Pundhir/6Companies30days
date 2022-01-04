#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int result=(k+m-1)%n;
    if(result==0)
    cout<<n<<endl;
    else
    cout<<result<<endl;
    return 0;
}