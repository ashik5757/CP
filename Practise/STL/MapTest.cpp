#include<bits/stdc++.h>

using namespace std;

int main() {

    // map<int,int> m;// = {{1,3},{2,5}};

    // m.insert(pair<int,int>(1,3));
    // m.insert(pair<int,int>(2,6));
    // m.insert(pair<int,int>(3,7));
    // m.insert(pair<int,int>(4,8));

    // for(int i=1; i<=m.size(); i++) {
    //     cout << m.at(i) << " ";
    // }

    int arr[1000];

    map<int,int> m,mark;


    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> arr[i];

        m[arr[i]]++;
    }

    sort(arr,arr+n);

    for(int i=0; i<n; i++) {

        if(mark[arr[i]]==0) {
            cout << arr[i] << " " << m[arr[i]] << endl;
            mark[arr[i]] = 1;   // switch on to not repeat value
        }
    }




    system("pause");

    return 0;

}