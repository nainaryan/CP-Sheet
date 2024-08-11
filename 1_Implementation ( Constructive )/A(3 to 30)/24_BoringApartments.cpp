#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		int ans = 0;
		int digits = 0 ;
		int temp = x;
		while( temp){
			temp=temp/10;
			digits++;
		}
		if(digits==1){
			if(x==1) ans = 1;
			else ans = 10*(x-1) + 1 ;
		}
		else if(digits==2){
			int a = x/10;
			ans = 10*(a-1) + 3 ;

		}else if(digits==3){
			int a = x/100;
			ans = 10*(a-1) + 6;
		}else{
			int a = x/1000;
			ans = 10*(a);
		}
		cout<<ans<<"\n";
	}
}