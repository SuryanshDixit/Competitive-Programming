	#include<bits/stdc++.h>
	using namespace std;

	int main(){
		int n,t;
		cin >> n >> t;
		string str;
		cin >> str;
		while(t--){
			for (int i = 0; i<str.size()-1;i++){
				if(str[i] == 'B' && str[i+1] == 'G'){
					char temp = str[i];
					str[i] = str[i+1];
					str[i+1] = temp;
					i++;
				}

			}
		}
		cout << str;
		return 0;

	}

