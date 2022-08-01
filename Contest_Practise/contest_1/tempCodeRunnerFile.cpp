#include<bits/stdc++.h>

using ll = long long;
using ld = long double;

using namespace std;


int main() {

    ll n;
    cin >> n;

    ll arr[n];

    for(ll i=0; i<n; i++) {
        cin >> arr[i];
    }


    
    for(ll i=0; i<n; i++) {

        ld sr = sqrt(arr[i]);

        if(sr-(int)sr>0 || arr[i]==1)
            cout << "NO" << endl;

        else {
            if((int)sr%2==0 || (int)sr%3==0 || (int)sr%5==0 || (int)sr%7==0)
                cout << "NO" << endl;
            else 
                cout << "YES" << endl;
        }
            

        

        // int count = 2;
        // ll d = arr[i]/2;

        // for(ll j=2; j<=d; j++) {
        //     if(arr[i]%j==0)
        //         count++;
            
        //     if(count>3)
        //         break;
        // }

        // if(count==3)
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;
        
    }








    system("pause");

    return 0;

}