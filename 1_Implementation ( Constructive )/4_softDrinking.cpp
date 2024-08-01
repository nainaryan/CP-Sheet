#include<bits/stdc++.h>
using namespace std;
int main(){
	//
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int totall = l*k; 
	int totalc = c*d;
	int templ = totall/nl; // maxm toast from drink
	int tempp = p/np;
	// cout<<totall;
	int a =min(tempp,templ);
	a = min (a, totalc);

	int ans = a/n;
	cout<<ans<<"\n";
	
}