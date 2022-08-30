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





void solve() {

    int n = in_i;

    int hb = in_i;
    int mb = in_i;

    int h[n],m[n];

    for(int i=0; i<n; i++) {
        cin >> h[i] >> m[i];
    }


    int anshh = 25, ansmm;

    for(int i=0; i<n; i++) {

        int ansh,ansm;

        if(h[i]==hb && m[i]==mb){
            anshh = 0;
            ansmm = 0;
            break;
        }

        if(h[i]>hb) {
            ansh = h[i]-hb;

            if(m[i]>=mb)
                ansm = m[i]-mb;
            else if(m[i]<mb) {
                ansm = (60-mb)+m[i];
                ansh--;
            }
        }

        else if(h[i]==hb && m[i]>mb) {
            ansh = 0;
            ansm = m[i]-mb;
        }

        else {
            ansh = (24-hb) + h[i];
            
            if(m[i]>=mb)
                ansm = m[i]-mb;
            else if(m[i]<mb) {
                ansm = (60-mb)+m[i];
                ansh--;
            }
        }

        if(anshh!=min(anshh,ansh))
            ansmm = ansm;
        anshh = min(anshh,ansh);
        

    }

    cout << anshh << " " << ansmm << endl;



}


int main() {

    int t = in_i;
    while(t--) 
        solve();


    system("pause");

    return 0;

}