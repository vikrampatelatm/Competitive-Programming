//https://codeforces.com/problemset/problem/1901/A
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t,n,x;
	cin>>t;
	while(t-->0){
		cin>>n>>x;
		vector<int> ans(n);
		for(int i=0;i<n;i++){
			cin>>ans[i];
		}
		int maxDiff=ans[0];

		for(int i=1;i<n;i++){
			maxDiff=max(maxDiff,ans[i]-ans[i-1]);
		}
		maxDiff=max(maxDiff,2*(x-ans[n-1]));
		cout<<maxDiff<<endl;
	}
	return 0;
}
