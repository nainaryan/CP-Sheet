#include<bits/stdc++.h>
using namespace std;
int main(){
	int n ;
	cin>>n;
	vector<int> v(n);
	for(int i = 0 ; i <n ; i++ ) cin>>v[i];

	int maxlen = 1;
	int i = 0,j=1;
	while(j < n ){
		if(v[j]>v[j-1]){
			maxlen=max(maxlen,j-i+1);
			j++;
		}
		else{
			i=j;
			j++;
		}
	}
	cout<<maxlen;
}