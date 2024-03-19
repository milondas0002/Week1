#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    sort(a.begin(), a.end());
    if(sum%2==0) 
        cout << sum << '\n';
    else
    {
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 != 0) {
                sum -= a[i];
                cout << sum << '\n';
                break;
            }
        }
    }
    return 0;
}
