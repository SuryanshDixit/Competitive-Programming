	#include<bits/stdc++.h>
	using namespace std;

	int main(){
		string s,t;
		cin >> s >> t;
		int count = 0;
		if(s.size() != t.size()){
			cout << "NO";
			exit(0);
		}
		for(int i = 0; i<s.size(); i++){
			if(s[i] != t[t.size()-i-1]){
				cout << "NO";
				break;
			}
			else{
				count++;
			}

		}
		if(count == s.size()){
			cout << "YES";
		}
		return 0;
	}

