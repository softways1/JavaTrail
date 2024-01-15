#include<bits/stdc++.h>
using namespace std;
int getFact(int n) {
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int main() {
    int row;
    cout << "Enter the number of row: ";
    cin >> row;
    for(int i=1;i<=row;i++) {
        for(int space=row;space>i;space--) {
            cout << " ";
        }
        for(int j=1;j<=i;j++) {
            int nfact = getFact(i);
            int rfact = getFact(j);
            int nMrfact = getFact(i - j);
            int combination = nfact / (rfact * nMrfact);
            cout << combination << " ";
        }
        cout << endl;
    }
}