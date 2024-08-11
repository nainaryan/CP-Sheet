#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n , k ;
	cin>>n>>k;
	while(k--){
		int num = n%10;
		if(num == 0 ){
			n = n/10;
		}else{
			n = n-1;
		}
	}
	cout<<n;

}
