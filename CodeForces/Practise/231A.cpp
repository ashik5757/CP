#include<iostream>

using namespace std;




int main() {



    int n;
    cin >> n;

    int arr[n][3];
    int count = 0;

    for(int i=0; i<n; i++) {
        int temp = 0;
        for(int j=0; j<3; j++) {
            cin >> arr[i][j];
            if(arr[i][j]==1)
                temp++;
        }

        if(temp>=2)
            count++;
    }

    cout << count << endl;





    system("pause");
    return 0;


}