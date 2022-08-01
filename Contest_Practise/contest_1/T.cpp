#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;


using namespace std;





int main() {

    ll m = 1000001;

    vector<ll> cPrime(m);

    for(ll i=0; i<m; i++) {
        cPrime[i] = 1;
    }


    cPrime[0] = cPrime[1] = 0;

    for(ll i=2; i*i<m; i++) {
        if(cPrime[i]==1) {
            for(ll j=i*i; j<m; j+=i) {
                cPrime[j] = 0;
            }
        }
            
    }



    ll n;
    cin >> n;

    ll arr[n];

    for(ll i=0; i<n; i++) {
        cin >> arr[i];
    }


    
    for(ll i=0; i<n; i++) {

        ld sr = sqrt(arr[i]);

        if(sr-(int)sr==0 && cPrime[(ll)sr]==1)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;

        
            
        
    }



    system("pause");

    return 0;

}