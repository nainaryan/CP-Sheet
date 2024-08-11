#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int cnt = 0 ;
	long long current = 0;
	int i = 1 ;
	long long sum = 0;
	while(sum<=n){
		current += i ;
		sum +=current;
		if(sum<=n) cnt++;
		i++;
	}
	cout<<cnt;

}