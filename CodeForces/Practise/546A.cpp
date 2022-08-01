#include<bits/stdc++.h>

using namespace std;




int main() {


    int k,w;
    long long n;

    cin >> k >> n >> w;

    long long s = 0;

    for(int i=1; i<=w; i++) {
        s += (i*k);
    }

    if(s-n<0)
        cout << "0" << endl;
    else 
        cout << s-n << endl;



    system("pause");

    return 0;


}