#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int minCap = 0 ;
	int psg = 0;
	while(n--){
		int a , b ;
		cin>>a>>b;
		psg -=a;
		psg +=b;
		minCap = max(minCap,psg);
	}
	cout<<minCap;

}