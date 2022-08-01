#include<bits/stdc++.h>

using namespace std;




int main() {

    int n;
    cin >> n;

    int p = 0, m = 0;

    while(n--) {

        int a,b;
        cin >> a >> b;

        p -= a;
        p += b;
        
        m = max(m,p);
    }


    cout << m << endl;
    



    system("pause");

    return 0;


}