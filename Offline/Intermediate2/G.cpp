
#include<bits/stdc++.h>

using namespace std;

int main() {


    int t;
    cin >> t;

    while(t--) {

        char a[8][8];

        for(int i=0; i<8; i++) {
            for(int j=0; j<8; j++) {
                cin >> a[i][j];
            }
        }

        for(int i=0; i<8; i++) {
            int counts = 0;
            int r=0,c=0;
            for(int j=0; j<8; j++) {
                if(a[i][j]=='#') {
                    counts++;
                    r=i;
                    c=j;
                }

            }

            if(counts==1 && r+1>=2 && r+1<=7 && c+1>=2 && c+1<=7) {
                if(a[r-1][c-1]=='#' && a[r-1][c+1]=='#' && a[r+1][c-1]=='#' && a[r+1][c+1]=='#') {
                    cout << r+1 << " " << c+1 << endl;
                    break;
                }

            }
        }



    }


    system("pause");
    return 0;

}

