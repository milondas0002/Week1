#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<string> v[3];
        map<string, int> fre;
        for(int i=0; i<3; i++)
        {
            v[i].resize(n);
            for(int j=0; j<n; j++)
            {
                cin >> v[i][j];
                fre[v[i][j]]++;
            }
        }
        int ans[3]={0};
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(fre[v[i][j]]==1) ans[i]+=3;
                else if(fre[v[i][j]]==2) ans[i]+=1;
            }
        }
        cout << ans[0] << " " << ans[1]<< " " << ans[2] << '\n';
    }
    return 0;
}
