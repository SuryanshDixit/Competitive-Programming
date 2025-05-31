#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int a = 0;
	for(int i = 0; i<26 ; i++){
		int count = 0;
		for(int j = 0; j<n; j++){
			if(('a' + i == (int)s[j]) || ('A' + i == (int)s[j])){
				count++;
			}
		}
		if(count == 0){
			cout << "NO" ;
			break;
		}
		a++;
	}
	if(a == 26){
		cout << "YES";
	}
	return 0;
}
