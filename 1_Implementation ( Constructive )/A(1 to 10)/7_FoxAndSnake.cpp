#include<bits/stdc++.h>
using namespace std;
int main(){
	int n , m ;
	cin>>n>>m;
	int i = 1 ; 
	while( i <= n ){
		string str(m,'#');

		if(i&1){
			cout<<str<<"\n";
		}
		else{
			string str1(m-1,'.');
			string str2(1,'#');
			str="";
			if(i%4 == 0){
				str = str2+str1;
			}
			else{
				str = str1+str2;
			}
			cout<<str<<"\n";
		}
		i++;
	}

}