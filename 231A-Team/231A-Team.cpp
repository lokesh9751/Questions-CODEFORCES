#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,p,v,t,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>p>>v>>t;
        if((p == 1 && v == 1) || (v == 1 && t == 1) || (p == 1 && t == 1)){
            sum++;
        }
    }
    cout<<sum;

    return 0;
}