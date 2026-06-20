#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m=2;
    long l = 1e9+7;
    cin >> n;
    for (int i = 1; i < n; i++) {
        m*=2;
        m=m%l;
    };
    cout << m;
    return 0;
}