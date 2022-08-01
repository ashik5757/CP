#include<bits/stdc++.h>

using namespace std;

int main() {


    while(!cin.eof()) {

        string str;
        cin >> str;

        set<int> s;
        set<int>::iterator it;


        for(int i=0; i<str.size(); i++) {


            switch(str.at(i)) {

                case 'B' :
                case 'F' :
                case 'P' :
                case 'V' :
                    s.insert(1);
                    break;
                
                case 'C' :
                case 'G' :
                case 'J' :
                case 'K' :
                case 'Q' :
                case 'S' :
                case 'X' :
                case 'Z' :
                    s.insert(2);
                    break;

                case 'D' :
                case 'T' :
                    s.insert(3);
                    break;
                
                case 'L' :
                    s.insert(4);
                    break;
                

                case 'M' :
                case 'N' :
                    s.insert(5);
                    break;

                case 'R' :
                    s.insert(6);
                    break;

                default:
                    break;


            }


        }


        for(it=s.begin(); it!=s.end(); it++) {
            cout << *it;
        }

        cout << endl;




    }






    system("pause");

    return 0;

}