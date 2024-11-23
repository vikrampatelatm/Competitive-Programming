//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N
#include <vector>
#include <iostream>
using namespace std;

void f(vector<vector<int>>& a, vector<vector<int>>& b, int i, int j, int R, int C) {
    if (i >= R) {
        return;
    }

    if (j >= C) {
        cout << endl;
        f(a, b, i+1, 0, R, C);
        return;
    }

    cout << a[i][j] + b[i][j] << " ";
    f(a, b, i, j+1, R, C);
}

int main() {
    int R, C;
    cin >> R >> C;

    vector<vector<int>> m1(R, vector<int>(C));
    vector<vector<int>> m2(R, vector<int>(C));

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> m1[i][j];
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> m2[i][j];
        }
    }

    f(m1, m2, 0, 0, R, C);

    return 0;
}