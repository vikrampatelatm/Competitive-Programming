//https://codeforces.com/problemset/problem/1877/A
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        int sum=0,x;
        cin >> n ;
        for(int i=0;i<n-1;i++){
            cin>>x;
            sum+=x;
        }

        cout<<0-sum<<endl;
        
    }
    return 0;
}
