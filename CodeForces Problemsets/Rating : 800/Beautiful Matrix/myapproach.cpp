#include<bits/stdc++.h>
using namespace std;

int main(){
	int n = 5,m = 5;
	int arr[n][m];
	int row,col;
	for (int i = 0; i< n; i++){
		for (int j = 0; j<m; j++){
			cin >> arr[i][j];
			if(arr[i][j] == 1){
				row = i;
				col = j;
			}
		}
	}
	int count;
	count = abs(row-2) + abs(col-2);
	cout << count;
	return 0;
}

