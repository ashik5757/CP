#include<bits/stdc++.h>

using namespace std;


double resultMax(int arr[], int n) {

    
    
    for(int i=0; i<n; i++) {

        vector<int> a,b;

        a.push_back(arr[i]);

        for(int j=0; j<n; j++) {
            if(j!=i)
                b.push_back(arr[j]);
        }


        //sum
    }

    if((n/2)>1) {

        for(int i=0; i<n-1; i++) {

            vector<int> a,b;
        
            
        
        }


    }


}




int main() {

    int t;
    cin >> t;

    double result[t];

    for(int i=0; i<t; i++) {

        int n;
        cin >> n;

        int arr[n];

        for(int j=0; j<n; j++) {
            cin >> arr[j];
        }

        result[i] = resultMax(arr,n);

    }

    for(int i=0; i<t; i++) {
        cout << result[i] << endl;
    }


    system("pause");

    return 0;

}