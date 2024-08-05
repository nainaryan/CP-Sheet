#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int c1 = 0 , c2 = 0 , c3 = 0 ;
	int i = 0 ;
	int n = s.length();
	while( i < n ){
		if(s[i]=='1') c1 ++;
		if(s[i]== '2') c2 ++;
		if(s[i]=='3') c3 ++;
		i++;
	}
	s="";
	while(c1 -- ){
		s += '1';
		if(s.length() != n ) s += '+';
	}
	while(c2 -- ){
		s += '2';
		if(s.length() != n ) s += '+';
	}
	while(c3 -- ){
		s += '3';
		if(s.length() != n ) s += '+';
	}
	cout<<s;	
}