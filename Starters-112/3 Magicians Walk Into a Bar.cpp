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
        string s;
        cin >> s;
        bool flag=true;
        int i;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                flag=false;
                break;
            }
            else if(i!=n-1)
                cout << "IDK\n";
        }
        if(flag)
            cout << "YES\n";
        else
        {
            while(i<n)
            {
                cout << "NO\n";
                i++;
            }
        }
    }
	return 0;
}
