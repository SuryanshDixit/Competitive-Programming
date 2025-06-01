#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	string final;
	for(int j = 1; j<4; j++){
		int count = 0;
		for(int i = 0; i<str.size(); i= i+2){
			if(j == str[i] -48){
				count++;
				final += str[i];
			}
		}
	}
	for(int i = 0; i<final.size(); ++i){
		if(i>0){
			cout << "+";
		}
		cout << final[i];
	}
 	return 0;
}
