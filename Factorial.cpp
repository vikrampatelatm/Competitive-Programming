//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J
#include<iostream>
using namespace std;


int f(int n){
    if(n == 1) return 1;
    cout<<n<<endl;
    return n*f(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<"fat:"<<f(n)<<endl;
    return 0;
}