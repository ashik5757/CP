#include<bits/stdc++.h>

using namespace std;

int main() {


    int t;
    cin >> t;

    

    for(int i=0; i<t; i++) {

        cout << endl;
        
        //int a1=2, a2=5, b1=2, b2=1, f1=2, f2=3;

        int a1,a2,b1,b2,f1,f2;

        cin >> a1 >> a2;
        cin >> b1 >> b2;
        cin >> f1 >> f2;

        int count = 0;


        if(a1==f1 && b1==f1 && ((a2<f2 && f2<b2) || (f2<a2 && b2<f2))) {
            a1++;
            count++;
        }

        else if(a2==f2 && b2==f2 && ((a1<f1 && f1<b1) || (f1<a1 && b1<f1))) {
            a2++;
            count++;
        }

        while(a1!=b1 || a2!=b2) {

            if(a1!=b1) {
                if(a1<b1 && !(a1+1==f1 && a2==f2)) {        // bug
                    a1++;
                    count++;
                }
                else if(a1>b1 && !(a1-1==f1 && a2==f2)){ //bug
                    a1--;
                    count++;
                }
            }

            if(a2!=b2) {
                if(a2<b2 && !(a2+1==f2 && a1==f1)) {
                    a2++;
                    count++;
                }
                else if(a2>b2 && !(a2-1==f2 && a1==f1)){
                    a2--;
                    count++;
                }
            }



        }


        cout << count << endl;



    }




    system("pause");

    return 0;

}