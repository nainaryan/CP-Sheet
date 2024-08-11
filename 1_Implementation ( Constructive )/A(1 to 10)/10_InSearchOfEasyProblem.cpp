#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	string ans="EASY";
	for(int i = 0 ; i <n ;i ++ ){
		cin>>v[i];
		if(v[i]==1){
			ans="HARD";
		}
	}
	cout<<ans;
}