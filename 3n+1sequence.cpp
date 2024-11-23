//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Q
#include<iostream>
using namespace std;

long long f(int n){
    if(n==1)return 1;
    return n%2==0 ? 1+f(n/2):1+f(3*n+1);
}

int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}