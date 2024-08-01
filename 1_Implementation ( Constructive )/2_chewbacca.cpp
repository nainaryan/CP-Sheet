#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	vector<int>v;
	int i = 0;
	while(n){
		int curr = n%10;
		if(curr>4) curr = 9 -curr;
		v.push_back(curr);
		n = n/10;
	}
	//32
	long long ans = 0;
	int len = v.size();
	// cout<<len<<"\n";
	for(int i=len-1 ; i >=0 ; i-- ){
		ans =ans*10;
		if(v[i]==0 && i==len-1) ans+=9;
		else ans += v[i];
		// cout<<ans<<"\n";
	}
	cout<<ans;
}