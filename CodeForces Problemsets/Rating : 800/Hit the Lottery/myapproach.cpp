#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int count = 0;
	if(n>=100){
		count += n/100;
		n = n - (n/100)*100;
	}
	if(n>=20 && n<100){
		count += n/20;
		n = n - (n/20)*20;
	}
	if(n>=10 && n<20){
		count += n/10;
		n = n - (n/10)*10;
	}
	if(n>=5 && n<10){
		count += n/5;
		n = n - (n/5)*5;
	}
	if(n>=1 && n<5){
		count += n;
	}
	cout << count;
 	return 0;
}
