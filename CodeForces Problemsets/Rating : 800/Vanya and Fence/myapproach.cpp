	#include<bits/stdc++.h>
	using namespace std;

	int main(){
		int n,h;
		cin >> n >> h;
		int height[n];
		int min_width = 0;
		for(int i = 0; i<n; i++){
			cin >> height[i];
			if(height[i] > h){
				min_width = min_width + 2;
			}
			else{
				min_width = min_width + 1;
			}
		}
		cout << min_width;
		return 0;
	}

