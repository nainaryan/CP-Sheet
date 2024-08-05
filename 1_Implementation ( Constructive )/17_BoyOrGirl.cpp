#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	unordered_map<char,int>m;
	for(int i = 0 ;i < str.length() ;i++ ){
		m[str[i]]++;
	}
	if(m.size()&1){
		cout<<"IGNORE HIM!";
	}
	else cout<<"CHAT WITH HER!";

}