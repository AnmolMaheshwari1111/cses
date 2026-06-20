#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;
    if (a>3) {
        for (int i = 2; i < a+1; i+=2){
            cout << i << " ";
        };
        for (int i = 1; i < a+1; i+=2){
            cout << i << " ";
        };
    } else if (a==1) {
        cout << 1;
    }
    else {
        cout << "NO SOLUTION";
    };
    return 0;
}