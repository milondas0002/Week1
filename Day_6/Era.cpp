#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        ll count=0, index=1;
        for(int i=0; i<n; i++)
        {
            if(a[i]>index) 
            {
                count+=a[i]-index;
                index=a[i];
            }
            index++;
        }
        cout << count << '\n';
    }
    return 0;
}