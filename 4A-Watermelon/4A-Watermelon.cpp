#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int w;
    cin>>w;
    if (w > 2)
    {
        if (w % 2 == 0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    else
    {
        cout<<"NO";
    }
}
