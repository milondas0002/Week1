#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin >> b[i];
    }
    int l=0, r=0;
    ll pair=0;
    while(l<n && r<m)
    {
        int c1=0, c2=0, current=a[l];
        while(a[l]==current && l<n)
        {
            c1++;
            l++;
        }
        while(current>b[r] && r<m) r++;
        while(b[r]==current && r<m)
        {
            c2++;
            r++;
        }
        pair+=(1ll * c1*c2);
    }
    cout << pair;
    return 0;
}