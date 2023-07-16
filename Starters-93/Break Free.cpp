#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll m = 1e9+7;

ll modp(ll a, ll b)
{
    a%=m;
    ll res = 1;
    while (b > 0)
    {
        if (b&1)
            res=(res*a)%m;
        b = b >> 1;
        a = (a * a)%m;
    }
    return res % m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    ll e=0,o=0;
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	    {
	        cin >> v[i];
	        if((v[i]&1)==0)
	            e++;
	        else
	        o++;
	    }
	    ll ans = modp(2,e) - 1 + (o!=0);
	    cout << ans << endl;
	}
	return 0;
}