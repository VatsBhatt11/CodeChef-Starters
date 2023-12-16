#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int x = n/(k+1);
        cout << n-(k*x) << endl;
    }
	return 0;
}
