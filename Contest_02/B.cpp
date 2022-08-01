#include<bits/stdc++.h>

using namespace std;

int fact(int n) {

    if(n==1)
        return n;
    else
        return n*fact(n-1);
}

int permutation(int n, int r) {

    return fact(n)/fact(n-r);
}


int main() {


    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {

        if(permutation(n,permutation(n,i))==i && permutation(n,i)!=i)
            cout << permutation(n,i) << endl;
    }



    system("pause");

    return 0;

}