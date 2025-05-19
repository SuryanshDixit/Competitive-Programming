#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin >> str;
	int count = 0;
	for(int i = 0; i<str.size(); i++){
		if(str[i] == '4' || str[i] == '7'){
			count++;
		}
	}
	str = to_string(count);
	int a = 0;
	for(int i = 0; i<str.size(); i++){
		if(str[i] == '4' || str[i] == '7'){
				a++;
		}
		else{
			cout << "NO";
			break;
		}
	}
	if(a>0){
		cout << "YES";
	}
	return 0;
}


