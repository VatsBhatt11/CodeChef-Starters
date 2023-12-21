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
        int x,y;
        cin >> x >> y;
        int n=x+y;
        int z=n/(y+1);
        if(x<=y)
            cout << 1 << endl;
        else
        {
            if(z>2)
                cout << x-(2*y) << endl;
            else
                cout << z << endl;
        }
    }
	return 0;
}
