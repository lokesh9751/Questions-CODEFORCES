#include <bits/stdc++.h>
using namespace std;

int main() {
	string str1; // use #include <string>
	string str2;
	
	cin>>str1;
	cin>>str2;

    transform(str1.begin() , str1.end() , str1.begin() , ::tolower );                  // use #include <algorithm>
    transform(str2.begin() , str2.end() , str2.begin() , ::tolower );

	cout<<str1.compare(str2);

}

