#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c=0;
    for(int i=0; i<=a; i++)
    {
        for(int j=0; j<=a; j++)
        {
            for(int k=0; k<=a; k++)
            {
                if(i+j+k<=a && i*j*k<=b) c++;
            }
        }
    }
    cout << c;
    return 0;
}