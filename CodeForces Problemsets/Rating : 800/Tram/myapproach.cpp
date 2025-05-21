	#include<bits/stdc++.h>
	using namespace std;

	int main(){
		int n;
		cin >> n;
		int max = 0,current = 0;
		while(n--){
			int a,b;
			cin >> a >> b;
			current = current + b - a;
			if( (current) > max){
				max = current;
			}
		}
		cout << max;
		return 0;
	}

