#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t,n,m;
	cin >> t;
	while(t--)
	{
	    cin >> m >> n;
	    if(n>m)
	    {
	        cout << "NO\n";
	        continue;
	    }
	    while(m%2==0)
	    m=m>>1;
	    if(n%m==0)
	    cout << "YES\n";
	    else
	    cout << "NO\n";
	}
	return 0;
}
