#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	int act_cnt = 0;
	for(int j = 0; j<26; j++){
		int count = 0;
		for(int i = 0; i<str.size(); i++){
			if((char)('a' + j) == str[i]){
				count++;
				break;
			}
		}
		if(count != 0){
			act_cnt++;
		}
	}
	if(act_cnt%2 == 0){
		cout << "CHAT WITH HER!";
	}
	else{
		cout << "IGNORE HIM!";
	}
 	return 0;
}
