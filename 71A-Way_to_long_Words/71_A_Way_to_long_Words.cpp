#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        if(s.size() > 10){
            cout<<s[0]<<s.size() - 2<<s[s.size() - 1]<<'\n';
        }
        else{
            cout<<s<<'\n';
        }
    }
}