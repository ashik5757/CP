#include<bits/stdc++.h>

using namespace std;

int btmFace(int x) {

    if(x==1)
        return 6;
    else if(x==2)
        return 5;
    else if(x==3)
        return 4;
    else if(x==4)
        return 3;
    else if(x==5)
        return 2;
    else
        return 1;
}

int main() {


    int a,b,c;
    cin >> a >> b >> c;
    
    cout << btmFace(a)+btmFace(b)+btmFace(c) << endl;


    system("pause");

    return 0;

}