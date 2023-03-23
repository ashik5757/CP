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




void solve() {

    int n;
    cin >> n;

    int arr[n];
    int sum[n+1] = {0};
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        sum[i+1] = sum[i] + arr[i];
    }


    int s = 1;
    int e = n;

    while(s<=e) {

        if(s==e)
            break;

        int mid = (s+e)/2;
        
        cout << "? " << mid-s+1 << " ";
        for(int i=s; i<=mid; i++) {
            cout << i << " ";
        }
        cout << endl;
        cout.flush();
        
        ll inq;
        cin >> inq;

        int t_sum = sum[mid]-sum[s-1];

        if(t_sum<inq)
            e = mid;
        else
            s = mid+1;
    }

    cout << "! " << e << endl;
    //fflush(stdout);

}


int main() {

    int t = in_i;
    while(t--) 
        solve();


    system("pause");

    return 0;

}