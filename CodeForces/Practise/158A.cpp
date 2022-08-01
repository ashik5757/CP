#include<iostream>

using namespace std;




int main() {


    int n,k;
    cin >> n >> k;

    int count = 0;
    int arr[n];
    int kth;


    for(int i=0; i<n; i++) {
        cin >> arr[i];
        if(i+1==k)
            kth = arr[i];
    }

    for(int i=0; i<n; i++) {
        if(arr[i]!=0 && kth<=arr[i])
            count++;
    }


    // for(int i=1; i<=n; i++) {
    //     int t;
    //     cin >> t;

    //     if(i==k && t>0) {
    //         kk = t;
    //         count = count+k;
    //     }

    //     else if(i>k && kk==t && t>0 && count!=0) {
    //         count++;
    //     }

    // }

    cout << count << endl;


    system("pause");
    return 0;


}