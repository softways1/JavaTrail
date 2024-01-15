#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v(26,0);
    cout << "Enter a word: " << endl;
    string s;
    getline(cin, s);
    for(int i=0;i<s.length();i++) {
        char ch = s.at(i);
        int ascii = (int)ch;
        if(ascii >= 65 && ascii <= 90) {
            v[65-ascii]++;
        }
        if(ascii >= 97 && ascii <= 122) {
            v[65-ascii]++;
            cout << v[65-ascii];
        }
    }
    bool ans = true;
    for(int i=0;i<26;i++) {
        if(v[i] == 0) {
            cout<<i;
            ans = false;
            break;
        }
    }
    if(ans) {
        cout << "Panagram" << endl;
    } else {
        cout << "Not Panagram" << endl;
    }
    return 0;
};