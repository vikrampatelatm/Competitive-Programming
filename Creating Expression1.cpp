//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V
#include <iostream>
#include<vector>
using namespace std;

bool f(int n,int x,int a[],int idx,int cur){
    if(idx==n){
        if(cur==x){
            return true;
        }else{
            return false;
        }
    }
    
    int pos=f(n,x,a,idx+1,cur+a[idx]);
    int neg=f(n,x,a,idx+1,cur-a[idx]);
    
    return pos || neg;
}

int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    if(f(n,x,a,1,a[0])){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
