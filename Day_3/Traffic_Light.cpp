#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        char c;
        string s;
        cin >> n >> c;
        cin >> s;
        s=s+s;
        int last=-1, ans=-1;
        for(int i=s.size()-1; i>=0; i--)
        {
            last++;
            if(s[i]=='g') last=0;
            if(s[i]==c) ans=max(ans, last);
        }
        cout << ans << '\n';
    }    
    return 0;
}