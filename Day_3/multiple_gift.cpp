#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll X, Y;
    cin >> X >> Y;
    int ans = 0;
    while (X <= Y) {
        X *= 2;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
