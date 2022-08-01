#include<bits/stdc++.h>


using namespace std;


int main() {

    int t;
    cin >> t;

    while(t--) {

        int n,q;
        cin >> n >> q;

        int arrN[n];
        int mx = 0;
        

        for(int i=0; i<n; i++) {
            cin >> arrN[i];
            mx+=arrN[i];
        }
        sort(arrN,arrN+n);

        


        for(int i=0; i<q; i++) {
            long long qu;
            cin >> qu;

            if(qu<=mx) {

                int count = 0;
                int sum = 0;
                for(int j=n-1; j>=0; j--) {

                    sum+=arrN[j];
                    count++;

                    if(sum>=qu)
                        break;
                    
                }

                if(sum>=qu)
                    cout << count << endl;

            }
            else
                cout << "-1" << endl;

            
        }



    }
    



    system("pause");

    return 0;


}