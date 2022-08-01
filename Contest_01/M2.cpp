#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        long long m = -2000000000, a[n], s=0;

        for(int i=0; i<n; i++) {
            cin >> a[i];
            m = max(m,a[i]);
            s+=a[i];
        }

        long double r, res;
        r = (s-m)/((double)n-1);
        res = (double)m + r;

        cout << setprecision(9) << res << endl;

    }




    system("pause");

    return 0;

}