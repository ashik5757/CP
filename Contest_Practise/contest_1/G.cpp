#include<bits/stdc++.h>

using ll = long long;

using namespace std;

// ll binary_value(ll dec) {

//     ll rem,bin = 0, prod = 1;

//     while(dec!=0) {
//         rem = dec%2;
//         bin += rem*prod;
//         dec/=2;
//         prod*=10;
//     }
    
//     return bin;

// }

string binary_value(ll dec) {

    string s;
    int arr[1000];

    int i = 0;
    while(dec>0) {
        arr[i] = dec%2;
        dec/=2;
        i++;
    }


    while(i--) {
        s.append(to_string(arr[i]));
    }

    return s;
}


int main() {

    while(true) {

        ll n;
        cin >> n;

        if(n==0)
            break;

        // char r[1000];
        int count = 0;

        // string s = itoa(n,r,2);
        string s = binary_value(n);

        for(int i=0; i<s.size(); i++) {
            if(s.at(i)=='1')
                count++;
        }

        cout << "The parity of " << s << " is " << count << " (mod 2)." << endl;

        
    }






    system("pause");

    return 0;

}