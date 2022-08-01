#include<bits/stdc++.h>

using ll = long long;

using namespace std;

int main() {


    ll n,t;
    cin >> n >> t;

    ll arr[n];

    for(ll i=0; i<n; i++) {
        cin >> arr[i];
    }


    ll count = 0, rt = 0, j=0;
    ll maxCount = 0;

    for(ll i=0; i<n; i++) {

        rt+=arr[i];
        count++;

        while(rt>t) {
            rt-=arr[j];
            j++;
            count--;
        }

        maxCount = max(maxCount,count);

    }



    cout << maxCount << endl;


    system("pause");

    return 0;

}