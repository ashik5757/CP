#include<bits/stdc++.h>

using namespace std;

#define ll long long
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef set<int> si;
typedef set<string> ss;

#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
#define BR cout << endl

#define in_i ({int tmp; cin>>tmp; tmp;})
#define in_ll ({ll tmp; cin>>tmp; tmp;})
#define in_s ({string tmp; cin>>tmp; tmp;})
#define in_arr(arr,n) for(ll i=0;i<n;i++)cin>>arr[i];
#define in_arr2(arr,r,c) for(ll i=0;i<r;i++)for(ll j=0;j<c;j++)cin>>arr[i][j];
#define in_vi(vec,n) for(ll i=0;i<n;i++){int tmp;cin>>tmp;vec.push_back(tmp);};
#define in_vs(vec,n) for(ll i=0;i<n;i++){string tmp;cin>>tmp;vec.push_back(tmp);};
#define in_si(set,n) for(ll i=0;i<n;i++){int tmp;cin>>tmp;set.insert(tmp);};
#define in_ss(set,n) for(ll i=0;i<n;i++){string tmp;cin>>tmp;set.insert(tmp);};

#define toLower_str(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define toUpper_str(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define sort_i(arr) sort(arr,arr+n);
#define sort_s(str) sort(str.begin(),str.end());
#define print_arr(arr,n) for(ll i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
#define print_arr2(arr,r,c) for(ll i=0;i<r;i++){for(ll j=0;j<c;j++){cout<<arr[i][j]<<" ";}cout<<endl;}
#define println(p) cout<<p<<endl




void solve(int t) {

    int n,r,c,sr,sc;
    cin >> n >> r >> c >> sr >> sc;

    string s;
    cin >> s;

    int arr[r][c];
    int m[r][c];

    memset(m,0,sizeof(m));

    m[sr-1][sc-1] = 1;

    for(int i=0; i<n; i++) {

        //print_arr2(m,r,c);
        
        if(s.at(i)=='E') {
            while(true) {
                sc++;
                if(m[sr-1][sc-1]==0) {
                    m[sr-1][sc-1] = 1;
                    break;
                }
            }
        }


        else if(s.at(i)=='W') {
            while(true) {
                sc--;
                if(m[sr-1][sc-1]==0) {
                    m[sr-1][sc-1] = 1;
                    break;
                }
            }
        }


        else if(s.at(i)=='N') {
            while(true) {
                sr--;
                if(m[sr-1][sc-1]==0) {
                    m[sr-1][sc-1] = 1;
                    break;
                }
            }
        }

        else if(s.at(i)=='S') {
            while(true) {
                sr++;
                if(m[sr-1][sc-1]==0) {
                    m[sr-1][sc-1] = 1;
                    break;
                }
            }
        }

        //cout << sr << " " << sc << endl;

    }

    cout << "Case #" << t <<": " << sr << " " << sc << endl;

}


int main() {

    int t = in_i;
    int tt = 1;
    while(t--) 
        solve(tt++);


    system("pause");

    return 0;

}