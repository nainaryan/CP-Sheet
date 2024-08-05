#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	// int a = 'a'-'A';
	// cout<<a;   // 32
	if(str[0]-'A' > 26 ){
		str[0] = str[0] -32;
	}
	cout<<str;
}