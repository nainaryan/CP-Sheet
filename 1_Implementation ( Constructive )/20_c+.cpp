#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin>>t;
	while(t--){
		int a , b , n ;
		int ans = 0;
		cin>>a>>b>>n;
		while( a<=n && b<=n ){
			// cout<<a<<" "<<b<<endl;s
			if(a>b){
				b +=a;
				ans++;
			}else{
				a +=b;
				ans++;
			}
		}
		// cout<<a<<" "<<b<<endl;
		cout<<ans<<"\n";
	}

}