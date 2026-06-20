#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    long long d=0;
    cin >> a;
    cin >> b >> c;
    for (int i = 0; i < a-1; i++){
        if (b>c){
            d+=b-c;
            c=b;
        };
        b=c;
        cin >> c;
    };
    cout << d;
    return 0;
}