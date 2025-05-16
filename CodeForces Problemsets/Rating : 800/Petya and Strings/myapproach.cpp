	#include<bits/stdc++.h>
	using namespace std;

	int main(){
		string str1,str2;
		cin >> str1 >> str2;
		int count_pos = 0,count_neg = 0 ,count_eq = 0;
		for(int i = 0; i < str1.size(); i++){
			if ((int)str1[i]>=65 && (int)str1[i] <=90){
				str1[i] = (char)(str1[i] + 32);
			}
			if ((int)str2[i]>=65 && (int)str2[i] <=90){
				str2[i] = (char)(str2[i] + 32);
			}
			if(str1[i] > str2[i]){
				count_pos++;
				break;
			}
			else if(str1[i] < str2[i]){
				count_neg--;
				break;
			}
			else{
				count_eq = 0;
			}
		}
		if(count_pos > 0){
			cout << 1;
		}
		if(count_neg < 0){
			cout << -1;
		}
		if (count_pos == 0 && count_neg==0){
			cout << 0;
		}
		return 0;
	}

