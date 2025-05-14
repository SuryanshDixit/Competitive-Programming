#include<bits/stdc++.h>
using namespace std;
int upper(char c){
	return c + 'A' - 'a';
}
int main(){
	while(true){
		string s;
		cin >> s;
		if(s.size() == 0){
			break;
		}// This will ensure all the small strings are taken input.

		for(int i = 0; i<s.size(); i++){
			s[i] = (char)upper(s[i]);
		}
		cout << s << endl;
	}
	return 0;
}

