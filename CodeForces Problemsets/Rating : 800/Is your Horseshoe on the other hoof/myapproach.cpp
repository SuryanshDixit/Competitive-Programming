#include<bits/stdc++.h>
using namespace std;

int main(){
	long int arr[4];
	for(int i = 0; i<4; i++){
		cin >> arr[i];
	}
	long int a;
	int count = 0;
	int ans = 0;
	int x= 0;
	for(int i = 0; i<4; i++ ){
		a = arr[i];
		if(a == arr[0]){
			count++;
		}
		if(a == arr[1]){
			count++;
		}
		if(a == arr[2]){
			count++;
		}
		if(a == arr[3]){
			count++;
		}
		if(count>2){
			ans += count;
			break;
		}
		else if(count == 2){
			ans++;
			x++;
			count = 0;
		}
		else{
			count = 0;
		}
	}
	if(x == 0 || x == 2){
		if(ans >= 1){
			cout << ans - 1;
		}
		else{
			cout << 0;
		}
	}
	else{
		cout << 2;
	}
 	return 0;
}
