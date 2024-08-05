#include<bits/stdc++.h>
using namespace std;
int main(){
	long long limak , bob ;
	cin>>limak >> bob;
	int ans = 0 ;
	while(limak<=bob){
		limak *=3;
		bob *=2;
		// cout<<limak <<" "<<bob<<"\n";
		ans++;
	}
	cout<<ans;
}