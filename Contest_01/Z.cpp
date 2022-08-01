#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n],b[n];

    int minA; int minB;

    for(int i=0; i<n; i++) {
        cin >> a[i] >> b[i];

        if(i==0) {
            minA = a[i];
            minB = b[i];
        }

        else {
            minA = min(a[i-1],a[i]);
            minB = min(b[i-1],b[i]);
        }
    }


    int totalM = minA+minB;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i!=j) {
                if(max(a[i],b[j])<totalM)
                    totalM = max(a[i],b[j]);
            }
            
        }
    }


    cout << totalM << endl;



    system("pause");

    return 0;

}