#include<bits/stdc++.h>

using namespace std;




int main() {


    int n;
    cin >> n;
    
    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    bool pal = true;
    int j = n-1;

    for(int i=0; i<n; i++) {
        if(arr[i]!=arr[j]) {
            pal = false;
            break;
        }
        j--;
    }


    if(pal)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    



    system("pause");

    return 0;


}