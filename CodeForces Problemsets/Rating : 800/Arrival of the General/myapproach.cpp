#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	int max,min;
	int count,count1;
	for(int i = 0; i<n; i++){
		cin >> arr[i];
		if(i == 0){
			max = arr[i];
			min = arr[i];
			count = i;
			count1 = i;
		}
		else{
			if(arr[i] > max){
				max = arr[i];
				count = i;
			}
			if(arr[i] <= min){
				min = arr[i];
				count1 = i;
			}
		}
	}
	if(count > count1){
		cout << count + (n - count1 -2);
	}
	else{
		cout << count + (n-count1 - 1);
	}
 	return 0;
}
