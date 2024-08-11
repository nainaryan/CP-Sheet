#include<bits/stdc++.h>
using namespace std;
void solve(vector<string> v ,int n ){
	int plus = 0 ;
	int x = 0;
	for(int i = 0 ;i <n ; i++ ){
		plus = 0 ; 
		// cout<<n<<i<<"\n";
		int j = 0 ;
		while(j<3){
			// cout<<v[i]<<"\n";
			if(v[i][j] =='+') plus++;
			j++;
			// cout<<plus;
			// cout<<plus<<" , ";
		}
		// cout<<plus;
		if( plus == 2 ) x +=1;
		else x -= 1;
		// cout<<x<<" ";
	}
	cout<<x;
}
int main(){
	int n;
	cin>>n;
	int t = n;
	vector<string> v;
	while( t-- ){
		string str;
		cin>>str;
		v.push_back(str);		
	}
	solve(v,n);
}