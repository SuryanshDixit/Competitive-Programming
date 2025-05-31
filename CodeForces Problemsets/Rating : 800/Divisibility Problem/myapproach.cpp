#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long int a,b;
		long int count ;
		cin >> a >> b;
		if(a%b == 0){
			cout << 0 << endl;
		}
		else{
			count = b - (a % b);
			cout << count << endl;
		}
	}
	return 0;
}
