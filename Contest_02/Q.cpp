#include<bits/stdc++.h>

using namespace std;

int main() {


    int t;
    cin >> t;

    for(int i=1; i<=t; i++) {

        int x,n,m;
        cin >> x >> n >> m;

        int xx=x, mm=m, nn=n;
        bool win = false;
        


        while(n--) {
            x =(x/2)+10;
            if(x<=0){
                win = true;
                break;
            }
        }

        while(m--) {
            x-=10;
            if(x<=0){
                win = true;
                break;
            }
        }


        while(mm--) {
            xx-=10;
            if(xx<=0){
                win = true;
                break;
            }
        }

        while(nn--) {
            xx =(xx/2)+10;
            if(xx<=0){
                win = true;
                break;
            }
        }

        if(win)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }



    system("pause");

    return 0;

}