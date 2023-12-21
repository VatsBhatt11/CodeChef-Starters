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
        int y=0;
        bool ans=false;
        while(4*y <= n)
        {
            if((n-(4*y))%3==0)
            {
                ans=true;
                break;
            }
            y++;
        }
        ans ? cout << "YES\n" : cout << "NO\n" ;
    }
	return 0;
}
