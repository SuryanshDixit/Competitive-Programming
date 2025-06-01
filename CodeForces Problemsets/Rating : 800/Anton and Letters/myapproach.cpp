#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	int act_cnt = 0;
	for(int j = 0; j<26; j++){
		int count = 0;
		for(int i = 1; i<str.size() -1; i = i+3){
			if((char)('a' + j) == str[i]){
				count++;
				break;
			}
		}
		if(count != 0){
			act_cnt++;
		}
	}
	cout << act_cnt;
 	return 0;
}
