#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	int new_arr[n];
	for(int i = 0; i<n;i++){
		cin >> arr[i];
		new_arr[arr[i]-1] = i+1;
	}
	for(int i = 0; i<n; i++){
		cout << new_arr[i] << " ";
	}
	return 0;
}
