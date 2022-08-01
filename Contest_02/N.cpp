#include<bits/stdc++.h>

using namespace std;

int main() {


    int k;
    cin >> k;

    int arr[12];

    for(int i=0; i<12; i++) {
        cin >> arr[i];
    }

    sort(arr,arr+12,greater<int>());

    int count=0, sum=0, i=0;

    while(sum<k && i!=12) {
        sum+=arr[i];
        count++;
        i++;
    }

    if(sum>=k)
        cout << count << endl;
    else
        cout << "-1" << endl;

    system("pause");

    return 0;

}