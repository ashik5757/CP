#include<bits/stdc++.h>

using namespace std;

int main() {

    int n,k;
    cin >> n >> k;

    int rt = 240-k;

    int count = 0;
    int sT = 0;

    for(int i=1; i<=n; i++) {
        
        sT+=5*i;
        if(sT>rt)
            break;
        
        count++;
    }

    cout << count << endl;




    system("pause");

    return 0;

}