#include<bits/stdc++.h>

using namespace std;

bool isDistinct(int y) {

    int arr[4];

    for(int i=0; i<4; i++) {
        arr[i] = y%10;
        y = y/10;
    }

    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            if(arr[i]==arr[j] && i!=j)
                return false;
        }
    }
    return true;

}



int main() {


    int y;
    cin >> y;

    y++;

    while(true) {

        if(isDistinct(y))
            break;
        
        y++;
    }

    cout << y << endl;



    system("pause");

    return 0;


}