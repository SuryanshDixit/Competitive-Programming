#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	int sum = 0;
	for(int i = 0; i<n; i++){
		cin >> arr[i];
		sum += arr[i];
	}

	cout << fixed
         << setprecision(
                numeric_limits<double>::max_digits10)
         << ((double)sum/n) << endl;
	return 0;
}
