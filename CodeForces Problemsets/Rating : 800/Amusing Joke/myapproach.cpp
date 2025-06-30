#include<bits/stdc++.h>
using namespace std;

int main(){
	string NEWYEAR;
	string CHRISTMASMEN;
	string PILE;
	cin >> NEWYEAR >> CHRISTMASMEN >> PILE;
	string concat = NEWYEAR + CHRISTMASMEN;
	int pile_len = concat.size();
	if(pile_len == PILE.size()){
		sort(concat.begin(),concat.end());
		sort(PILE.begin(),PILE.end());
		if(concat == PILE){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
	}
	else{
		cout << "NO";
	}
 	return 0;
}
