#include<bits/stdc++.h>
using namespace std;
void print(vector<int> ans ){
	cout<<ans.size()<<"\n";
	reverse(ans.begin(),ans.end());
	for( int i = 0 ; i < ans.size() ; i++ ){
		cout<<ans[i]<<" ";
	}
	cout<<"\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>ans;
		if(n<=10) ans.push_back(n);
		else{
			int digits=0;
			int temp = n ;
			while(temp){
				digits++;
				temp = temp/10;
			}
			temp = n ;
			int p = digits-1;
			int power = 1;
			while(temp){
				int a = temp%10;
				temp = temp/10;
					if(a != 0 ){
						// cout<<power<<" ";B
						ans.push_back(a*power);
				}
				power *=10;
			}


		}

		print(ans);

	}
}