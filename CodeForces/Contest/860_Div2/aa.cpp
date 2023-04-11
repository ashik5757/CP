#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        bool ok = true;
        int maxa = *max_element(a, a+n);
        int maxb = *max_element(b, b+n);
        for (int i = 0; i < n; i++) {
            if (a[i] != maxa && b[i] != maxb && a[i] != b[i]) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "Yes" : "No") << endl;
    }
    return 0;
}
