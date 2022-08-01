#include<bits/stdc++.h>

using namespace std;

double avg(int arr[], int n) {

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum+=arr[i];
    }

    return (double)sum/n;
}

int minIndex(int arr[], int n) {

    int min = 6;
    int x;
    for(int i=0; i<n; i++) {
        if(arr[i]<min) {
            min = arr[i];
            x = i;
        }
    }
    return x;
}


int main() {


    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }


    if(avg(arr,n)<4.5) {

        int count = 0;

        while(avg(arr,n)<4.5) {
            arr[minIndex(arr,n)] = 5;
            count++;
        }

        cout << count << endl;
    }

    else
        cout << "0" << endl;





    system("pause");

    return 0;

}