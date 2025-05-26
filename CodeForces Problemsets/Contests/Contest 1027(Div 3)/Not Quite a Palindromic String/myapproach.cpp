// The code which not worked well. The explaination is provided below.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int n,k;
// 		cin >> n >> k;
// 		string str;
// 		cin >> str;
// 		int count = 0;
// 		for (int i = 0; i<n/2; i++){
// 			if(str[i] == str[n - i -1]){
// 				count++;
// 			}
// 		}
// 		if(count%2 == 0){
// 			if(k%2 == 0){
// 				cout << "YES" << endl;
// 			}
// 			else{
// 				cout << "NO" << endl;
// 			}
// 		}
// 		else{
// 			if(k%2==0){
// 				cout << "NO" << endl;
// 			}
// 			else{
// 				cout << "YES" << endl;
// 			}
// 		}
// 	}
// 	return 0;
// }
