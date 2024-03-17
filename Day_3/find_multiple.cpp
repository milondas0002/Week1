#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = c; 
    while (ans <= b && ans < a) {
        ans += c; 
    }
    if (ans > b || ans < a) {
        cout << "-1" << endl; 
    } else {
        cout << ans << endl; 
    }
    return 0;
}
