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
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin >> v[i];
        vector<int>a,b;
        sort(v.begin(),v.end());
        ll sum=0;
        for(auto it:v)
        {
            if(it>sum)
            {
                sum+=it;
                a.push_back(it);
            }
            else
                b.push_back(it);
        }
        cout << n-a.size() << endl;
        for(auto it:a)
            cout << it << " ";
        for(auto it:b)
            cout << it << " ";    
        cout << endl;
    }
	return 0;
}
