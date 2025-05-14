	#include<bits/stdc++.h>
	using namespace std;

	int main(){
		long int t;
		cin >> t;
		while(t--){
			int n;
			cin >> n;
			string str;
			cin >> str;
			long long int z = 0;
			for(int i = 0; i< n; i++){
					z = z + ((int)(str[i]-48) * ((int)pow(2,n-i-1)));
			}
			cout << z << endl;
		}
		return 0;
	}

