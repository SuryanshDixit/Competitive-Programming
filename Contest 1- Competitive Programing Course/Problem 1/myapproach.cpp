#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	for (int i=0; i<str.size();i++){
		if(str[i] == ' '){
			cout << endl;
		}
		else{
			cout << (char)(str[i] - 32);
		}
	}

	return 0;
}
