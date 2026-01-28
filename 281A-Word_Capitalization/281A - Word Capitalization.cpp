#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
    cin>>str;
    
    if(isalpha(str[0]) && str[0] != ' '){
        str[0] = toupper(str[0]);

    }
    
    cout<<str;
}