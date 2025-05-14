#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long int n;
        cin >> n;
        long int max_speeds[n];
        for (int i = 0; i<n; i++){
            cin >> max_speeds[i];
        }
        int count = 1;
        for (int i = 0; i < n-1; i++){
            if (max_speeds[i+1] > max_speeds[i]){
                max_speeds[i+1] = max_speeds[i];
            }
            else{
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
