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
#define println2(p,q) cout<<p<<" "<<q<<endl
#define println3(p,q,r) cout<<p<<" "<<q<<" "<<r<<endl


bool isCoL(int x1,int y1,int x2,int y2,int x3, int y3) {

    double s1 = (double)(y2-y1)/(x2-x1);
    double s2 = (double)(y3-y2)/(x3-x2);
    double s3 = (double)(y3-y1)/(x3-x1);

    if(s1==s2==s3)
        return true;
    else
        return false;

}


void solve() {

    int n,m;
    cin >> n >> m;

    int si,sj, ti,tj;
    cin >> si >> sj >> ti >> tj;

    string dir;
    cin >> dir;

    while(si!=ti && sj!=tj) {

        if(dir=="DR") {

            if(n<m){

            }


            dir = "UR";
        }
        else if(dir=="DL") {

        }
        else if(dir=="UR") {
            
        }
        else if(dir=="UL") {
            
        }        
    }


}


int main() {

    int t = in_i;
    while(t--) 
        solve();


    system("pause");

    return 0;

}