#include<bits/stdc++.h>
using namespace std;
long long int fact(int x){
    if (x == 0){
        return 1;
    }
    if (x != 1){
        return x * fact(x-1);
    }
    else{
        return 1;
    }
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 0; i<n; i++){
			for(int j =0; j<=i;j++){
				cout << (long long int)(((long long int)fact(i))/((long long int)fact(i-j)*(long long int)fact(j))) << " ";
			}
			cout << endl;
		}
	}
	return 0;
}

