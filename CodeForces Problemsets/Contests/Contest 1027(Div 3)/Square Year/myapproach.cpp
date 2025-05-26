#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >>s;
		// cout << s.size() << endl;
		int count = 0;
		for(int i = s.size()-1; i>=0 ; i--){
			count = count + pow(10,s.size() - i - 1) * ((int)s[i] - 48);
		}
		int a = 0;
		while(true){
			if(count  == 0){
				cout << 0 << " " << 0 << endl;
				break;
			}
			if(a * a == count){
				cout << a-1 << " " << 1 << endl;
				break;
			}
			else{
				a++;
			}

			if(a > 100){
				cout << -1 << endl;
				break;
			}
		}
	}
	return 0;
}
