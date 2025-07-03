#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		int a = 0;
		for(int i = 0; i<26; i++){
			int count = 0;
			for(int j=0; j<str.size();j++){
				if((char)(i+97) == str[j]){
					count++;
				}
			}
			if(count > 1){
				cout << "Yes" << endl;
				a++;
				break;
			}
			else{
				continue;
			}
		}
		if(a == 0){
			cout << "No" << endl;
		}
	}

	return 0;
}
