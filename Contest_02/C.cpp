#include<bits/stdc++.h>

using namespace std;

int main() {


    int n,a;
    cin >> n >> a;

    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int count = 0;

    for(int i=0; i<n; i++) {

        int l = a-i;
        int r = a+i;
        
    }














    // if(a%2==0) {
    //     for(int i=1; i<=n; i++) {
    //         if(i%2==0 && arr[i]==1)
    //             count++;
    //     }
    // }
    // else {
    //     for(int i=1; i<=n; i++) {
    //         if(i%2!=0 && arr[i]==1)
    //             count++;
    //     }
    // }

    cout << count << endl;


    system("pause");

    return 0;

}