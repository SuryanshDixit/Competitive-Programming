	#include<bits/stdc++.h>
	using namespace std;

	int main(){
		int n;
		cin >> n;
		int count = 0;
		while(n--){
			int a;
			cin >> a;
			if(a == 1){
				count++;
			}
		}
		if(count > 0){
			cout << "HARD";
		}
		else{
			cout << "EASY";
		}
		return 0;
	}

