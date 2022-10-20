#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
    string s;
    int n,p,q;
    cin >> n >> p >> q;
    cin >> s;
    int len=s.size();
    int cnt=0;
    while(len>=0){
        if(len%p==0) break;
        cnt++;
        len-=q;
    }
    if(len<0) cout << -1 << endl;
    else{
        int cntt=len/p;
        int index=0;
        cout << cntt+cnt << endl;
        for(int i=1; i<=cntt; i++){
            cout << s.substr(index, p) << endl;
            index+=p;
        }
        for(int i=1; i<=cnt; i++){
            cout << s.substr(index, q) << endl;
            index+=q;
        }
    }
    return 0;
}