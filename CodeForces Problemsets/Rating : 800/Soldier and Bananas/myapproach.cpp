	#include<bits/stdc++.h>
	using namespace std;

	int main(){
		int k,n,w;
		cin >> k >> n >> w;
		int total_cost = k*(w*(w+1)/2);
		if(total_cost>n){
			cout << total_cost - n;
		}
		else{
			cout <<0;
		}
		return 0;
	}

