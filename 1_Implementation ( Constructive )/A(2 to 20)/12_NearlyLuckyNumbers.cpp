#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	int count=0;
	while(n){
		int num = n%10;
		if(num!= 4 && num!=7 ){

		}else{
		// cout<<num<<" ";
			count++;

		}
		n =n/10;
	}
	if(count == 4 || count==7 ) cout<<"YES";
	else cout<<"NO";
}