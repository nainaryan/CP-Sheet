#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	vector<string> v(5);
	for(int i = 0; i <5 ;i++ )cin>>v[i];

		int i = 0 ;
	bool flag = false;
	while(i<5){
		if(v[i][0] == str[0]){
			flag = true;
		}
		else if(v[i][1] == str[1]) flag = true;

		i++;
	}
	if(flag) cout<<"YES";
	else cout<<"NO";

}