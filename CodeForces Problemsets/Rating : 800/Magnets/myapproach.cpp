#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int count = 0;
	char magnets;
	while(n--){
		string str;
		cin >> str;
		if(magnets == str[0]){
			count++;
		}
		magnets = str[1];
	}

	cout << count+1;
	return 0;
}
