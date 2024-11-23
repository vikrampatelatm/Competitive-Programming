//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
#include <iostream>
#include <vector>
using namespace std;

int f(int n,int w,vector<int>& values,vector<int>& weight,int i){
    if(i==n || w==0){
        return 0;
    }
    
    if(weight[i]>w){
        return f(n,w,values,weight,i+1);
    }
    
    int take=values[i]+f(n,w-weight[i],values,weight,i+1);
    int skip=f(n,w,values,weight,i+1);
    
    return max(take,skip);
}
int main() {
   int n,w;
   cin>>n>>w;
   vector<int> values(n);
   vector<int> weight(n);
   
   for(int i=0;i<n;i++){
       cin>>weight[i]>>values[i];
   }
   
   cout<<f(n,w,values,weight,0);
   
   return 0;
}