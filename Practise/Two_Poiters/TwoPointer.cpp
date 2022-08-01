#include<bits/stdc++.h>

using namespace std;


int isPair(int arr[], int n, int x) {

    int i = 0;
    int j = n-1;

    while(i<j) {

        cout << arr[i] << " " << arr[j] << endl;


        if(arr[i]+arr[j]==x)
            return 1;

        else if(arr[i]+arr[j]<x)
            i++;
        
        else
            j--;

    }

    return 0;




}



int main() {

    int arr[] = {4,6,1,8,9,3,0,2,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);

    clock_t s = clock();

    cout << isPair(arr,n,1) << endl;
    
    clock_t e = clock();
    
    cout << fixed << setprecision(9) << (float)(e-s)/CLOCKS_PER_SEC << endl;






    system("pause");

    return 0;

}