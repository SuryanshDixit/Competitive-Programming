	#include<bits/stdc++.h>
	using namespace std;

	int main(){
		int n,count = 0;
		cin >> n;
		string str;
		cin >> str;
		for(int i = 0; i<str.size(); i++){
			if(str[i] == 'A'){
				count++;
			}
		}
		int diff = str.size()-count;
		if(count > diff){
			cout << "Anton";
		}
		else if(count == diff){
			cout << "Friendship";
		}
		else{
			cout << "Danik";
		}
		return 0;

	}

