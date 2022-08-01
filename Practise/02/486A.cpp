#include<bits/stdc++.h>

using namespace std;

int main() {

    long long n;
    cin >> n;

    long long pos = n/2;
    long long neg = ceil(n/2.0);

    cout << pos*(pos+1) - neg*neg << endl;



    system("pause");

    return 0;

}