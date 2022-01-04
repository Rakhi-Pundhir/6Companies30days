#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //formula to calculate number of squares is -> n*(n+1)*(2*n+1)/6
    int sq=(n*(n+1)/2)*(2*n+1)/3;
    cout<<"The number of squares are :"<<sq<<endl;
    return 0;
}
// for n=8 ,the number of squares are 204