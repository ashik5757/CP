#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {


        int n;
        cin >> n;

        long long res = (((((n*567)/9)+7492)*235)/47)-498;

        cout << (abs(res)%100)/10 << endl;

    }






    system("pause");

    return 0;

}