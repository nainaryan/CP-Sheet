#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin>>t;
	while(t--){
		int a , b , n ;
		int ans = 0;
		cin>>a>>b>>n;
		while( a<n && b<n ){
			if(a>b){
				b +=a;
			}else{
				a +=b;
			}
			ans++;
		}
		cout<<ans<<"\n";
	}

}