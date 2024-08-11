#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<vector<int>>v;
	for( int i = 0 ; i<5 ; i++ ){
		vector<int> v1(5);
		for( int j = 0 ;j<5 ;j++){
			cin>>v1[j];
		}
		v.push_back(v1);
	}
	int ans = 0;
	pair<int,int> p;
	for(int i = 0 ; i<5 ; i++ ){
		for(int j = 0 ; j<5 ; j++ ){
			if(v[i][j]==1){
				p = {i,j};
				break;
			}
		}
	}
	ans = abs(p.first - 2) + abs(p.second-2);
	cout<<ans;

}