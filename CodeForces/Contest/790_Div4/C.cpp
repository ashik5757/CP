#include<bits/stdc++.h>

using namespace std;



int main() {


    int t;
    cin >> t;

    while(t--) {

        int n,m;
        cin >> n >> m;
        int arr[n][m];

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin >> arr[i][j];
            }
        }

        int sum = 0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                
                int s = arr[i][j];
                

                for(int r=0; r<n; r++) {

                    if(r<i) {
                        int d = i-r;
                        if((j-d)>=0)
                            s+=arr[r][j-d];
                        
                        if(j+d<m)
                            s+=arr[r][j+d];
                    }

                    else if(r>i) {
                        int d = r-i;
                        if((j-d)>=0)
                            s+=arr[r][j-d];
                        
                        if(j+d<m)
                            s+=arr[r][j+d];
                    }



                }

                sum = max(s,sum);

            }
        }

        cout << sum << endl;

    }
    



    system("pause");

    return 0;


}