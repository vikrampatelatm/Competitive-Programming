//https://codeforces.com/problemset/problem/1896/A
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        vector<int> res(n);
        for(int i=0;i<n;i++){
            cin>>res[i];
        }

        for(int i=1;i<n-1;i++){
            for(int j=1;j<n-1;j++){
                if(res[j-1] < res[j] && res[j]> res[j+1]){
                    swap(res[j],res[j+1]);
                }
            }
        }

        if(is_sorted(res.begin(),res.end())){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
