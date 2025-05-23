#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int count = 0;
		for(int i = 0; i<n;i++){
			if(i == x){
				count++;
				continue;
			}
			else{
				cout << i << " ";
			}
		}
		if(count != 0){
			cout << x << endl;
		}
		else{
			cout << endl;
		}
	}
	return 0;
}
