#include<bits/stdc++.h>

using namespace std;




int main() {


    int n,k;
    cin >> n >> k;

    while(k--) {

        if(n%10==0)
            n = n/10;
        else 
            n--;
    }

    cout << n << endl;



    system("pause");

    return 0;


}