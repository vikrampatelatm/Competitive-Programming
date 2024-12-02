//https://codeforces.com/problemset/problem/1903/A
#include <bits/stdc++.h>
using namespace std;

vector<string> allString;

void f(vector<int>& ans,int n,int k){

	if(k<=1){
		cout<<"NO"<<endl;
		return;
	}else{
		cout<<"YES"<<endl;
	}
}
int main() 
{
	int t,n,k;
	cin>>t;
	while(t-->0){
		cin>>n>>k;
		vector<int> ans(n);
		for(int i=0;i<n;i++){
			cin>>ans[i];
		}
		if(is_sorted(ans.begin(), ans.end())){
			cout<<"YES"<<endl;
		}else{
			f(ans,n,k);
		}
	}
}
