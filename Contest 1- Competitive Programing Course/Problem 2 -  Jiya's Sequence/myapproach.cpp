#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		long long int z = 1;
		cin >> n;
		int arr[n];
		for (int i = 0; i<n; i++){
				cin >> arr[i];
				z = z*arr[i];
		}
		if (z%10 == 2 || z%10 == 3 || z%10 == 5){
			cout << "YES"<<endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}

