#include <iostream>
#include <algorithm>

using namespace std;

int to_dec(string s){
    int n = 0;
    for (int i = 0; i < s.length(); i++){
        n = n*2 + (s[i] - '0');
    }

    return n;
}

string to_bin(int x){
    string s = "";
    while (x != 0){
        s += x%2 + '0';
        x /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    

    return 0;
}