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
        int cnt=0;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]<v[i+1])
                cnt++;
        }
        cnt>=3 ? cout << "YES\n" : cout << "NO\n";
    }
	return 0;
}
