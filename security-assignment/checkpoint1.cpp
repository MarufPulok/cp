#include<bits/stdc++.h>
using namespace std;

string caesar(string s, int k) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i]))
            result += char(int(s[i] + k - 65) % 26 + 65);
        else
            result += char(int(s[i] + k - 97) % 26 + 97);
    }
    return result;
}

int main() {
    string s;
    cin >> s;
    for(int i=1;i<=26;i++) {
        cout<<caesar(s,i)<<endl;
    }
    return 0;
}