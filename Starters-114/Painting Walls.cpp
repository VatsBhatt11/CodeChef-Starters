#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,w;
        cin >> n >> m >> w;
        w=w>>1;
        cout << w/(n*m) << endl;
    }
	return 0;
}
