#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n),w(n);
        for(int i=0;i<n;i++)
            cin >> v[i];
        for(int i=0;i<n;i++)
            cin >> w[i];
        map<int,int>m;
        for(int i=0;i<n;i++)
            m[v[i]]=max(m[v[i]],w[i]);
        int ans=0;
        for(auto it:m)
            ans+=it.second;
        cout << ans << endl;
    }
	return 0;
}
