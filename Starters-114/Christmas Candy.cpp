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
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin >> v[i];
        int ans=0;
        int mx=v[0];
        for(int i=1;i<n;i++)
        {
            if(mx>v[i])
                ans++;
            else
                mx=v[i];
        }
        cout << ans << endl;
    }
	return 0;
}
