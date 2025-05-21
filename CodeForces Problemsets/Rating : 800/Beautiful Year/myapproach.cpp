	#include<bits/stdc++.h>
	using namespace std;

	int main(){
		int n;
		cin >> n;

		while(true){
			int copy = n+1;
			int arr[4];
			for(int i = 0; i<4; i++){
				arr[i] = copy%10;
				copy = copy/10;
			}
			if(arr[0] != arr[1] && arr[1] != arr[2] && arr[2] != arr[3] && arr[0] != arr[2] && arr[0] != arr[3] && arr[1] != arr[3] ){
				break;
			}

			n++;
		}
		cout << n + 1;
		return 0;
	}

