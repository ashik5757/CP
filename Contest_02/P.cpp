#include<bits/stdc++.h>

using namespace std;

bool isLucky(long long d, int n) {

    while(n--) {
        if(d%10!=4 && d%10!=7)
            return false;
        d = d/10;
    }
    return true;
}

bool isHalf(long long d, int n) {

    long long sum1=0, sum2=0, dd=d;

    for(int i=0; i<n/2; i++) {
        sum1+=(d%10);
        d = d/10;
    }

    // int i = n/2;

    // while(i--) {
    //     sum2+=(d%10);
    //     d = d/10;
    // }

    for(int i=n/2; i<n; i++) {
        sum2+=(d%10);
        d = d/10;
    }


    if(sum1==sum2 && isLucky(dd,n))
        return true;

    return false;

}

int main() {

    int n;
    long long d;
    cin >> n >> d;

    if(isLucky(d,n) && isHalf(d,n) && n>=2 && n<=50)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;




    system("pause");

    return 0;

}