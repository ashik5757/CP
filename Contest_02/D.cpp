#include<bits/stdc++.h>

using namespace std;

int main() {


    int n,m;
    cin >> n >> m;



    while(true) {

        bool end = false;
        for(int i=1; i<=n; i++) {
            if(i>m) {
                end = true;
                break;
            }
            m-=i;
        }

        if(end)
            break;

    }


    cout << m << endl;



    system("pause");

    return 0;

}