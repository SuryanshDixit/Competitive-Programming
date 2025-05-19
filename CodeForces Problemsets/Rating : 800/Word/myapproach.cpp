#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int count = 0;
	for(int i = 0; i<s.size(); i++){
		if(s[i]<=90 && s[i] >= 65){
			count++;
		}
	}
	if(count > (s.size() - count)){
		for(int i = 0; i<s.size(); i++){
			if(s[i]<=90 && s[i] >= 65){
				continue;
			}
			else{
				s[i] = (char)(s[i] - 32);
			}
		}
	}
	else if(count == (s.size()-count)){
		for(int i = 0; i<s.size(); i++){
			if(s[i]<=90 && s[i] >= 65){
				s[i] = (char)(s[i] + 32);
			}
			else{
				continue;
			}
		}
	}
	else{
		for(int i = 0; i<s.size(); i++){
			if(s[i]<=90 && s[i] >= 65){
				s[i] = (char)(s[i] + 32);
			}
			else{
				continue;
			}
		}
	}
	cout << s;
	return 0;
}

