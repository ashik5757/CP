#include<bits/stdc++.h>

using ll = long long;
using ld = long double;

using namespace std;

int main() {

    ll n,l;
    cin >> n >> l;

    ll arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    sort(arr,arr+n);

    double maxD = 0;

    if(arr[0]!=0 || arr[n-1]!=l) {
        maxD = max(arr[0],l-arr[n-1]);
    }

    for(int i=1; i<n; i++) {
        maxD = max((arr[i]-arr[i-1])/2.0,maxD);
    }


    cout << fixed << maxD << endl;




    system("pause");

    return 0;

}