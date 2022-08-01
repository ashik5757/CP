#include<bits/stdc++.h>

using namespace std;



int main() {


    int n;
    cin >> n;


    while(n--) {

        int nn;
        cin >> nn;

        long long arr[nn];

        for(int i=0; i<nn; i++) {
            cin >> arr[i];
        }

        sort(arr,arr+nn);

        long long m = arr[0];
        long long count = 0;

        for(int i=0; i<nn; i++) {

            if(arr[i]>m)
                count+=(arr[i]-m);
        }

        cout << count << endl;


    }
    



    system("pause");

    return 0;


}