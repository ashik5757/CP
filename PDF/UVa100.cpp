#include<bits/stdc++.h>

using namespace std;

int cycleLength(int a, int b) {

    int m;

    for(int i=a; i<=b; i++) {
        
        int count = 0;
        int j = i;

        while(true) {

            if(j==1) {
                count++;
                break;
            }

            if(j%2!=0) {
                j = (3*j)+1;
                count++;
            }

            else {
                j = j/2;
                count++;
            }
        }

        m = max(m,count);
    }

    return m;

}


int main() {


    int a,b;


    while(!cin.eof()){
        
        cin >> a >> b;
        int x = min(a,b);
        int y = max(a,b);

        cout << x << " " << y << " " << cycleLength(x,y) << endl;

    }






    system("pause");

    return 0;

}