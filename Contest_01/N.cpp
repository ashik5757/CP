#include<bits/stdc++.h>

using namespace std;

int main() {

    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int ovlDrnk = k*l;
    int t1 = ovlDrnk/nl;
    int t2 = c*d;
    int t3 = p/np;

    cout << min({t1,t2,t3})/n << endl;




    system("pause");

    return 0;

}