#include <vector>
#include<iostream>
using namespace std;

int f(vector<vector<int>>& a, int R, int C, int i, int j){
    if(i == R-1 && j == C-1){
        return a[i][j];
    }
    
    if(i>=R || j>=C){
        return -100000000;
    }
    
    int right =  f(a, R, C, i, j+1);
    int down =   f(a, R, C, i+1, j);
    
    return a[i][j]+max(right, down);
}

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> a(N, vector<int>(M));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> a[i][j];
        }
    }
    
    cout<< f(a, N, M, 0, 0)<<endl;
    
    return 0;
}
