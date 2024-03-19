#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, p, ans;
    cin >> a >> b >> c;
    if(a>b)
    {
        p=b*2;
        ans=p+a;
        if(ans==c) cout << "YES";
        else cout << "NO\n";
    }
    else
    {
        p=2*a;
        ans=p+a;
        if(ans==c) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}