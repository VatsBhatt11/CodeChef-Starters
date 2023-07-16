#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n,i;
	cin >> t;
	vector<int>pal;
	for(int i=0;i<32768;i++)
	{
	    string s=to_string(i),s1=s;
	    reverse(s.begin(),s.end());
	    if(s==s1)
	    pal.push_back(i);
	}
	while(t--)
	{
	    cin >> n;
	    vector<int> v(n);
	    for(i=0;i<n;i++)
	    cin >> v[i];
	    ll ans=0;
	    unordered_map<int,int>m;
	    for(auto it:v)
	    {
	        m[it]++;
	        for(auto itr:pal)
	        ans+=m[itr^it];
	    }
	    cout << ans << endl;
	}
	return 0;
}