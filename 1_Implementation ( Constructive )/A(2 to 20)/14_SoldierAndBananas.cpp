#include<bits/stdc++.h>
using namespace std;
int main(){
	int k , n , w ;
	cin>>k>>n>>w;
	long long TotalMoney = (w)*(w+1)/2;
	TotalMoney *=k;
	long long ans = TotalMoney - n;
	if(ans <0 ) cout<<0;
	else cout<<ans;
}