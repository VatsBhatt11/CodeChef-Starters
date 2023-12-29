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
        if(n==2)
        {
            cout << -1 << endl;
            continue;
        }
        vector<vector<int>>v(n,vector<int>(n));
        int k=1;
        if(n&1)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                    v[i][j]=k++;
            }
            for(int j=1;j<n;j+=2)
                swap(v[1][j],v[1][j+1]);
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                for(int j=0;j<n-1;j++)
                    v[i][j]=k++;
            }
            for(int j=1;j<n-1;j+=2)
                swap(v[1][j],v[1][j+1]);
            for(int i=0;i<n;i++)
                v[i][n-1]=k++;
            for(int i=0;i<n-1;i++)
                v[n-1][i]=k++;
            swap(v[n-2][0],v[n-2][1]);
        }
        for(auto it:v)
        {
            for(auto itr:it)
                cout << itr << " ";
            cout << endl;
        }
    }
	return 0;
}
