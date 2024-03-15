#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c=a+b;
    int mx=max(a, b);
    int d=(2*mx)-1;
    cout << max(c, d);
    return 0;
}