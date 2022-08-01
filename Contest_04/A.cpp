#include<bits/stdc++.h>

using namespace std;

long long sum(long long arr[], int n) {

    long long i = 0;
    long long j = n-1;

    long long m = 0;

    long long sum1 = arr[i], sum3 = arr[j];

    while(i<j) {
        
        if(sum1==sum3)
            m = max(m,sum3);

        if(sum1>sum3) {
            j--;
            sum3+=arr[j];
        }

        else  {
            i++;
            sum1+=arr[i];
        }
        
    }

    return m;

}



int main() {

    int n;
    cin >> n;

    long long arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << sum(arr,n) << endl;


    system("pause");

    return 0;

}