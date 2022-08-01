#include<bits/stdc++.h>

using namespace std;

int main() {


    int n;
    cin >> n;

    long long arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    sort(arr,arr+n);

    int count = 1;

    for(int i=0; i<n-1; i++) {
        //cout << arr[i] << " ";
        if(arr[n-1]-arr[i]<=5)
            count++;
    }

    cout << count << endl;


    system("pause");

    return 0;

}