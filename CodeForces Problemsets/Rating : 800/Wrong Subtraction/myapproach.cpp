#include<bits/stdc++.h>
using namespace std;

int main(){
	long int n;
	int k;
	cin >> n >> k;
	while(k--){
		if(n%10 == 0){
			n = n/10;
		}
		else{
			n--;
		}
	}
	cout << n;
	return 0;
}

