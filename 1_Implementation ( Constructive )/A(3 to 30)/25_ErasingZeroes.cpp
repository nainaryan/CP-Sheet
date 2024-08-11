#include<bits/stdc++.h>
using namespace std;
int count0(string str, int i , int j ){
	int ans = 0 ;
	while(i<=j){
		if(str[i]=='0') ans++;
		i++;
	}
	return ans;

}
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int ans = 0;
		int i = 0 , j = str.length()-1;
		while(i<=j){
			if(str[i] == '1'){
				while(i<=j){
					if(str[j]=='1'){
						ans = count0(str,i,j);
						i=j+1;
					}else j--;
				}
			} else i++;
		}
		cout<<ans<<"\n";
	}
}