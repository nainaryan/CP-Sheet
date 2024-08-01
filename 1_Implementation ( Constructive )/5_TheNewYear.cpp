#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>v(3);
	cin>>v[0]>>v[1]>>v[2];
	int ans = 0 ;
	sort(v.begin(),v.end());
	ans = v[2]-v[0];
	cout<<ans<<"\n";


}