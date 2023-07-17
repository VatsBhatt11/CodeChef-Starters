#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int m = 1e9+7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k;
	    cin >> n >> k;
	    string s;
	    cin >> s;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
	        v.push_back(i);
	    }
	    ll ans=1;
	    for(int i=k-1;i<v.size()-1;i+=k)
	        ans=(ans*(v[i+1]-v[i]))%m;
	    cout << ans << endl;
	}
	return 0;
}
