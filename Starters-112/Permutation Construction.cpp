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
        int n,x;
        cin >> n >> x;
        int mid=(n+1)/2;
        if(n&1 && x==mid)
        {
            cout << -1 << endl;
            continue;
        }
        int n1=n+1;
        vector<int>ans(n);
        ans[0]=x;
        ans[n-1]=n1-x;
        set<int>s;
        for(int i=1;i<=n;i++)
        {
            if(i==x || i==n1-x)
                continue;
            s.insert(i);
        }
        if(n&1)
        {
            s.erase(mid);
            ans[n/2]=mid;
        }
        for(int i=1;i<n/2;i++)
        {
            int a=*s.begin();
            int b=n1-a;
            ans[i]=a;
            ans[n-i-1]=b;
            s.erase(a);
            s.erase(b);
        }
        for(auto it:ans)
            cout << it << " ";
        cout << endl;
    }
	return 0;
}
