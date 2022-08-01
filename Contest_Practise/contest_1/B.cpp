#include<bits/stdc++.h>

using namespace std;

int main() {


    int t;
    cin >> t;

    int res[t];

    for(int i=0; i<t; i++) {


        int n,k,p;
        cin >> n >> k >> p;

        if((k+p)%n==0)
            res[i]=n;

        else if(k+p>n)
            res[i]=(k+p)%n;

        else
            res[i]=k+p;
    }


    for(int i=0; i<t; i++) {
        cout << "Case " << i+1 << ": " << res[i] << endl;
    }




    system("pause");

    return 0;

}