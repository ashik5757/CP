#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n+1];

    if(n%2!=0)
        cout << "-1" << endl;

    else {

        for(int i=1; i<=n; i++) {
            if(i%2!=0)
                arr[i] = i+1;
            else 
                arr[i] = i-1;
        }

        for(int i=1; i<=n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }








    system("pause");

    return 0;

}