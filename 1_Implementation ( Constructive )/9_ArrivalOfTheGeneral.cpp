	#include<bits/stdc++.h>
	using namespace std;
	int main(){
		int n ;
		cin>>n;
		vector<int> soldiers(n);
		int maxm = 0, minm = INT_MAX;
		int maxi = 0, mini = 0;
		for(int i = 0 ; i < n ; i++ ){
			cin>>soldiers[i];
			// cout<<soldiers[i]<<"  ";
			if(soldiers[i] > maxm ) {
				maxm = soldiers[i];
				maxi = i ;
			}
			// cout<<"haye";
			// cout<<minm<<"\n";
			if(soldiers[i] <= minm ) {
				// cout<<"chota";

				minm = soldiers[i];
				mini = i ;
			}
		}
		int swaps = 0 ;
		// cout<<maxi<<" "<<mini<<"\n";
		if(maxi>mini) swaps = (maxi)+(n-1-mini)-1;
		else if (maxi<mini) swaps = maxi + (n-1-mini);

		cout<<swaps;

	}