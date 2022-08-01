#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;




int main() {


    long long n,m,a;
    cin >> n >> m >> a;

    long long count = 0;
    

    if((n*m)<=(a*a)) {
        count = 1;
    }

    else if(a==1) {
        count = m*n;
    }


    // else if(n==a || m==a) {
        
    //     if(n==a) {
    //         // while(m>0) {
    //         //     m-=a;
    //         //     count++;
    //         // }
    //         count = ceill((double)m/a);
    //     }
    //     else if(m==a) {
    //         // while(n>0) {
    //         //     n-=a;
    //         //     count++;
    //         // }
    //         count = ceill((double)n/a);
    //     }

    // }


    // else if(m==n){

    //     while(n>0 || m>0) {

    //         if(n>0) {
    //             n-=a;
    //             count++;
    //         }

    //         if(m>0) {
    //             m-=a;
    //             count++;
    //         }
    //     }
    // }


    else {
        count = ceill((double)m/a) * ceill((double)n/a);
    }



    cout << count << endl;


    system("pause");

    return 0;


}