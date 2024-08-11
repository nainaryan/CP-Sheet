

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n ;
	cin>>n;
	vector<int>v(n+1);
	vector<pair<int,int>> helper;
	for( int i = 1 ; i<=n ;i++ ){
		cin>>v[i];
		//cout<<"Aryan Nain";
		helper.push_back({ v[i] , i });
	}
	sort(helper.begin(),helper.end());
	for(int i = 0 ; i < n ; i++ ){
		cout<<helper[i].second<<" ";
	}

}