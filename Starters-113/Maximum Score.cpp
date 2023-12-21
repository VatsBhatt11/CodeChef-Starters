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
        int n0=0,n1=0;
        for(auto it:v)
        {
            n0+=it==0;
            n1+=it-0;
        }
        cout << min(n0,n1) << endl;
    }
	return 0;
}
