//https://codeforces.com/problemset/problem/1866/A
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() 
{
    int n,x,ans=INT_MAX;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(abs(0-x)<ans){
            ans=abs(0-x);
        }
    }
    cout<<ans<<'\n';
    return 0;
}
