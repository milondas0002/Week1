#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int c=0;
    int tmp=a;
    while(a!=0)
    {
        int mod=a%10;
        c++;
        a/=10;
    }
    if(4-c==0) cout << tmp;
    else if(4-c==1) cout << "0" << tmp;
    else if(4-c==2) cout << "00" << tmp;
    else cout << "000" << tmp;
    return 0;
}