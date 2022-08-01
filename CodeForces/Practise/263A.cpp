#include<iostream>

using namespace std;


int main() {

    int arr[6][6];
    int r,c;

    for(int i=1; i<=5; i++) {
        for(int j=1; j<=5; j++) {
            cin >> arr[i][j];
            if(arr[i][j]==1){
                r = i;
                c = j;
            }
        }
    }


    cout << (abs(3-r)+abs(3-c)) << endl;



    system("pause");

    return 0;


}