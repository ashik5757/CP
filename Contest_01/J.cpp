#include<bits/stdc++.h>

using namespace std;


void sort(int arr[][2], int n) {

    for(int i=0; i<n; i++) {
        for(int j=1; j<n-i; j++) {
            if(arr[j-1][0]>arr[j][0])
                swap(arr[j-1],arr[j]);
        }
    }
}




int main() {


    int s,n;
    cin >> s >> n;

    int arr[n][2];

    for(int i=0; i<n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }


    sort(arr,n);


    int count = 0;

    for(int i=0; i<n; i++) {
        
        if(s<=arr[i][0]) {
            break;
        }

        else if(s>arr[i][0]) {
            s+=arr[i][1];
            count++;
        }

    }


    if(count==n)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;



    system("pause");

    return 0;

}