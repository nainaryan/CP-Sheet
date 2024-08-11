#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<string,int> m ;
	m.insert({"Tetrahedron",4});
	m.insert({"Cube",6});
	m.insert({"Octahedron",8});
	m.insert({"Dodecahedron",12});
	m.insert({"Icosahedron",20});
	int n ;
	int ans = 0 ;
	cin>>n;	
	while(n--){
		string str;
		cin>>str;
		ans += m[str];
	}
	cout<<ans;

}