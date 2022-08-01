#include<bits/stdc++.h>

using namespace std;

int arr[1000000];


int main() {


    int n,a,b,sum=0;
    cin >> n;

    //int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }


    cin >> a >> b;

    for(int i=a; i<=b; i++) {
        sum+=arr[i];
    }

    cout << sum << endl;




    system("pause");

    return 0;

}