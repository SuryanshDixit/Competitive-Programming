#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		string t;
		cin >> t;
		int x = 0;
		for(int i = t.size()-1; i>=0;i--){
			if(x == 0){
				if(t[i] != '0'){
					x++;
				}
			}
			else{
				if(t[i] == '0'){
					x++;
				}
			}
		}
		cout << t.size() - x << endl;
	}

	return 0;
}
