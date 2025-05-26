// This not worked well. Explaination given below.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int n;
// 		cin >> n;
// 		int arr[n];
// 		int count = 1;int x = 0;
// 		int hua = 0;
// 		for(int i = 0;i<n; i++){
// 			cin >> arr[i];
// 		}
// 		for(int i = 0; i<n-1; i++){
// 			if(arr[i] + 1 < arr[i+1]){
// 				hua++;
// 				count++;
// 				if((x+1)%2!=0){
// 					count = count + (x+1)/2 ;
// 				}
// 				else{
// 					count = count + (x+1)/2 - 1;
// 				}
// 			}
// 			else if(arr[i] == arr[i+1]){
// 				x = x;
// 			}
// 			else{
// 				x++;
// 			}
// 		}
// 		if(hua == 0){
// 			if((x+1)%2!=0){
// 					count = count + (x+1)/2 ;
// 				}
// 				else{
// 					count = count + (x+1)/2 - 1;
// 				}
// 		}
// 		cout << count << endl;
// 	}
// 	return 0;
// }
