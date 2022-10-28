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

    ll n,q;
    cin >> n >> q;

    ll sum[n], mxH[n];
    ll a[n], k[q];

    for(ll i=0; i<n; i++){
        cin >> a[i];
        if(i==0){
            sum[0] = a[0];
            mxH[0] = a[0];
        }
        else {
            sum[i] = sum[i-1]+a[i];
            mxH[i] = max(mxH[i-1],a[i]);
        }
    }

        
    for(ll i=0; i<q; i++)
        cin >> k[i];

    
    for(ll i=0; i<q; i++) {
        
        int s=0,e=n-1;
        ll ans = 0;

        while(s<=e) {
            int mid = s+(e-s)/2;

            if(mxH[mid]<=k[i]) {
                ans = sum[mid];
                s = mid+1;
            }
            else
                e = mid-1;
        }

        cout << ans << " ";
    }

    cout << endl;

}


int main() {

    int t = in_i;
    while(t--) 
        solve();


    system("pause");

    return 0;

}