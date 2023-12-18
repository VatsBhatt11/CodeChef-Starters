#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,s;
    cin >> t >> s;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        ll ans=0;
        for(int i=0;i<n;i++)
            cin >> v[i];
        if(s)
        {
            sort(v.rbegin(),v.rend());
            vector<ll>prefix(n+1);
            for(int i=0;i<n;i++)
                prefix[i+1]=prefix[i]+v[i];
            for(int i=0;i<n;i++)
            {
                if(i+i+1>n)
                    break;
                ans=max(ans,prefix[i+i+1]-prefix[i]);
            }
        }
        else
        {
            sort(v.begin(),v.end());
            for(int i=1;i<=n/2;i++)
                ans+=v[i];
            if(n&1)
                ans+=v[0];
        }
        cout << ans <<  endl;
    }
	return 0;
}
