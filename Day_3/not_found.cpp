#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s ;
    bool present[26]={false};
    for(char c:s)
    {
        present[c-'a']=true;
    }
    for(char i='a'; i<='z'; i++)
    {
        if(!present[i-'a'])
        {
            cout << i;
            return 0;
        }
    }
    cout << "None";
    return 0;
}