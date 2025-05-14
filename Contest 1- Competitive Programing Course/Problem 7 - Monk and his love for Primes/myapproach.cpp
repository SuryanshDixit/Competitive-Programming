#include<bits/stdc++.h>
using namespace std;
int prime(int x){
    int count = 0;
    for(int i = 2; i <x; i++){
        if (x%i == 0){
            count++;
        }
    }
    if(count != 0){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    string str;
    cin >> str;
    
    int upper = 0, lower = 0;
    for (int i = 0; i<str.size(); i++){
        if ((int)str[i] >= 97 && (int)str[i] <= 122){
            str[i] = (char)((int)str[i] - 32);
            upper = upper + (int)str[i];
        }
        else{
            str[i] = (char)((int)str[i] + 32);
            lower =lower + (int)str[i];
        }
    }
    if (upper >= lower) {
        cout << prime(upper-lower);
    }
    else{
        cout << prime(lower-upper);
    }

    return 0;
}
