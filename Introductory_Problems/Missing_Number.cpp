#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long m,n,t;
    cin >> m;
    t = m*(m+1)/2;
    for (int i = 0; i < m-1; i++){
        cin >> n;
        t-=n;
    };
    cout << t;
    return 0;
}