#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string m;
    cin >> m;
    int j=1,n=1;
    for (int i = 0;i<int(m.length())-1;i++){
        if (m[i]==m[i+1]){
            j++;
            if (j>n) {
                n=j;
            };
        }
        else {
            j=1;
        };
    };
    cout << n;
    return 0;
}