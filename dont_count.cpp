//https://codeforces.com/problemset/problem/1881/A
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t-- > 0) {
        int n,m;
        string x,s;
        cin >> n >> m;
        cin >> x >> s;
        
        if(s.empty()){
            cout<<"0"<<endl;
            continue;
        }

        int min_repeat=ceil((double)s.length() / x.length());
        int max_repeat=min_repeat+2;


        string con=x;
        int op=0;
        bool found=false;

        for(int i=0;i<6;i++){
            if(con.find(s)!=string::npos){
                op=i;
                found=true;
                break;
            }

            con+=con;
        }

        if(found){
            cout<<op<<endl;
        }else{
            cout<<"-1"<<endl;
        }

    }
    return 0;
}
